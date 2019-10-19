/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:23:24 by alboumed          #+#    #+#             */
/*   Updated: 2019/10/18 18:08:08 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_trim(const char *s1, const char *set, int i, int j)
{
	static int		size[2];

	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j] && set[j] != '\0')
			j++;
		if (set[j] == '\0')
			break ;
		i++;
	}
	size[0] = i;
	while (s1[i])
		i++;
	while (i >= 0)
	{
		j = 0;
		--i;
		while (s1[i] != set[j] && set[j] != '\0')
			j++;
		if (set[j] == '\0')
			break ;
	}
	size[1] = i;
	return (size);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		*size;
	char	*dest;

	i = 0;
	size = ft_trim(s1, set, i, j);
	dest = malloc(sizeof(char) * (size[1] - size[0] + 2));
	while (i < (size[1] - size[0] + 1))
	{
		dest[i] = s1[size[0] + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
