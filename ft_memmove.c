/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 14:49:59 by alboumed          #+#    #+#             */
/*   Updated: 2019/10/23 12:32:25 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if ((-1 * ((char)dest - (char)src)) <= (int)len)
	{
			while (i < len)
			{
				((char*)dest)[i] = ((char*)src)[i];
				i++;
			}
			return (dest);
	}
	i = len - 1;
	while (i >= 0)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i--;
	}
	return (dest);
}
