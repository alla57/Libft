/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:12:12 by alboumed          #+#    #+#             */
/*   Updated: 2019/11/17 21:15:18 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	if (!(dest = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (i >= 0)
	{
		dest[i] = s1[i];
		i--;
	}
	return (dest);
}
