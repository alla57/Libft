/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 11:08:44 by alboumed          #+#    #+#             */
/*   Updated: 2019/12/11 21:19:11 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char*)dest)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)src)[i] == (unsigned char)c)
		{
			return (dest + (i + 1));
		}
		i++;
	}
	return (NULL);
}
