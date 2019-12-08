/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:23:24 by alboumed          #+#    #+#             */
/*   Updated: 2019/11/22 17:27:03 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		*ft_trim(const char *s1, const char *set, int *size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
			j++;
		if (set[j] == '\0')
			break ;
		++i;
	}
	size[0] = i;
	if (s1[i] == '\0' && (size[1] = size[0] - 1))
		return (size);
	i = ft_strlen(s1);
	while (i > 0)
	{
		j = 0;
		--i;
		while (s1[i] != set[j] && set[j])
			j++;
		if (set[j]  == '\0')
			break ;
	}
	size[1] = i;
	return (size);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		size[2];
	char	*dest;

	i = 0;
	j = 0;
	if (s1[0] == '\0')
	{
		dest = malloc(sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	ft_trim(s1, set, size);
	if (!(dest = malloc(sizeof(char) * (size[1] - size[0] + 2))))
		return (NULL);
	while (i < (size[1] - size[0] + 1))
	{
		dest[i] = s1[size[0] + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int main()
{
	char s1[] = "j";
	char set[] = "je";
	char *s2;
	int i = 0;
	s2 = ft_strtrim(s1, set);
	printf("%s", s2);
	while (s2[i])
		i++;
	//printf("\n%d", i);
	//printf("\n%c", s2[0]);
	return (0);
}
