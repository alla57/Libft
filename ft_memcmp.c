/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:09:45 by alboumed          #+#    #+#             */
/*   Updated: 2019/12/11 21:46:12 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n && ((unsigned char*)s1)[i] == ((unsigned char*)s2)[i])
		i++;
	if (i == n)
		i--;
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
