/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 14:49:59 by alboumed          #+#    #+#             */
/*   Updated: 2019/11/17 16:26:09 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest - src > 0)
	{
		while (len > 0)
		{
			len--;
			((char*)dest)[len] = ((char*)src)[len];
		}
		return (dest);
	}
	while (i < len)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	return (dest);
}
