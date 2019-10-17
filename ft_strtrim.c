/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:23:24 by alboumed          #+#    #+#             */
/*   Updated: 2019/10/17 17:14:44 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	while (s1[i] == set[i])
		i++;
	if (set[i] == '\0')
		j = i;
	while (s1[i])
		i++;
	dest = malloc(sizeof(char) * (i - j));
	i = i - j;
	j = 0;
	while (s2[i] == set[j] && set[j] != '\0')
	{
		i++;
		j++;
	}
	if (set[j] == '\0')
		dest = malloc(sizeof(char) * (i - j));
	while ()
	{
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		size;
	char	*dest;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j] && set[j] != '\0')
			j++;
		if (set[j] == '\0')
			break;
		i++;
	}
}

char *ft_strtrim(const char *s, const char *set)
{
	int i[0]
	
	i[0] = -1;
	while (s[++i[0]] && (i[1] = -1))
	{
		while (set[++i[1]])
			if (s[i[0]] == set[i[1]] && (i[1] = -2))
				break;
		if (i[1] != -2)
			break;
	}
	i[0] = -1;
	while (++i[0])

}

int main()
{
	char s1[] = "je suis la";
	char set[] = "je";
	printf("%s", ft_strtrim(s1, set));
	return (0);
}
