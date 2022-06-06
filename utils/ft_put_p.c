/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:07:18 by mmidon            #+#    #+#             */
/*   Updated: 2022/05/04 11:07:00 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_put_p(char select, unsigned long long x)
{
	char	*base;
	int		c;

	c = 0;
	if (select == 'x' || select == 'p')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (select == 'p')
		c += ft_putstrv2("0x");
	c += ft_putnbr_p(x, base);
	return (c);
}
