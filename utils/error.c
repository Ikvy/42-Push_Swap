/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:46:04 by mmidon            #+#    #+#             */
/*   Updated: 2022/06/06 12:14:12 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_error(char *msg)
{
	(void)msg;
	ft_printf("Error\n");
	exit (1);
}

void	ft_is_repeating(int *input, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	j;
	int		*bis;

	bis = input;
	len = size;
	i = 0;
	while (size--)
	{
		len = size + i;
		j = 0;
		while (len--)
		{
			if (input[i] == bis[j] && i != j)
				ft_error("Repetition");
			j++;
		}
		i++;
	}
}
