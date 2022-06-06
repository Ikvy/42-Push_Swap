/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <mmidon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:00:23 by mmidon            #+#    #+#             */
/*   Updated: 2022/06/06 12:13:31 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

size_t	ft_count_args(char *stack_a)
{
	size_t	args;
	size_t	i;
	size_t	x;

	if (!stack_a)
		return (0);
	args = 0;
	x = ft_strlen(stack_a);
	i = 0;
	if (ft_isspace(stack_a[x - 1]))
		args--;
	while (x)
	{
		while (ft_isspace(stack_a[i]))
			i++;
		while (!ft_isspace(stack_a[i]) && --x)
			i++;
		args++;
	}
	return (args);
}

size_t	ft_count_more_args(char **stacks_a, int len)
{
	size_t	args;

	args = 0;
	while (len--)
		args += ft_count_args(stacks_a[len + 1]);
	return (args);
}

int	ft_format(char *stack_a)
{
	size_t	i;
	int		check;

	check = 0;
	i = 0;
	while (stack_a[i])
	{
		if (!ft_isspace(stack_a[i]))
			check = 42;
		i++;
	}
	i = 0;
	while (stack_a[i])
	{
		if ((stack_a[i] == '-' || stack_a[i] == '+') || check != 42)
		{
			if (!ft_isdigit(stack_a[i + 1]))
				return (1);
		}
		else if (!((ft_isdigit(stack_a[i]) || ft_isspace(stack_a[i]))))
			return (1);
		i++;
	}
	return (0);
}

t_list	*ft_init(int ac, char **av)
{
	int		x;
	int		i;

	i = 0;
	x = ac;
	if (ac == 2)
	{
		if (ft_format(av[1]) || ft_strlen(av[1]) == 0)
			ft_error("Bad input");
		return (ft_send(av[1], ft_count_args(av[1])));
	}
	if (ac > 2)
	{
		while (ac-- - 1)
		{
			if (ft_format(av[++i]))
				ft_error("Bad input");
		}
		return (ft_send_more(av, ft_count_more_args(av, x), x));
	}
	exit (1);
	return (NULL);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	a = ft_init(ac, av);
	ft_index(&a);
	ft_order(&a);
	ft_convert_to_binary(&a);
	if (ft_is_sorted(a))
		exit (1);
	if (ft_lstsize(a) <= 3)
		ft_sort_few(&a);
	else if (ft_lstsize(a) <= 5)
		ft_sort_five(&a, &b);
	else
		ft_radix(&a, &b);
}
