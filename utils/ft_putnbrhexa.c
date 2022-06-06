/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:10:32 by mmidon            #+#    #+#             */
/*   Updated: 2022/05/04 11:06:48 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_putnbrhexa(unsigned int x, char *base)
{
	int	c;

	c = 0;
	if (x < 16)
		c += ft_putcharv2(base[x]);
	else
	{
		c += ft_putnbrhexa(x / 16, base);
		c += ft_putcharv2(base[x % 16]);
	}
	return (c);
}
