/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrv2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:12:36 by mmidon            #+#    #+#             */
/*   Updated: 2022/05/04 11:02:58 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_putnbrv2(int x)
{
	int	c;

	c = 0;
	if (x == -2147483648)
	{
		c += ft_putcharv2('-');
		c += ft_putnbrv2(21474);
		c += ft_putnbrv2(83648);
	}
	else if (x < 0)
	{
		c += ft_putcharv2('-');
		c += ft_putnbrv2(x * -1);
	}
	else if (x >= 0 && x <= 9)
		c += ft_putcharv2(x + '0');
	else
	{
		c += ft_putnbrv2(x / 10);
		c += ft_putnbrv2(x % 10);
	}
	return (c);
}
