/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:33:49 by mmidon            #+#    #+#             */
/*   Updated: 2022/05/11 13:35:07 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*ft_strdup(char	*src)
{
	char	*cp;
	int		i;

	i = 0;
	cp = malloc(sizeof(char) * (ft_strlen(src)+ 1));
	while (src[i])
	{
		cp[i] = src[i];
		i++;
	}
	cp[i] = 0;
	return (cp);
}
