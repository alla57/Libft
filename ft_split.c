/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 09:03:39 by alboumed          #+#    #+#             */
/*   Updated: 2019/12/11 22:54:15 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_is_str(char *str, char *charset, int i)
{
	int		j;

	while (str[i])
	{
		j = 0;
		while (str[i] != charset[j] && charset[j] != '\0')
			j++;
		if (charset[j] != '\0')
			return (i);
		i++;
	}
	return (i);
}

int		ft_is_charset(char *str, char *charset, int i)
{
	int		j;

	while (str[i])
	{
		j = 0;
		while (str[i] != charset[j] && charset[j] != '\0')
			j++;
		if (charset[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}

char	**ft_set_word_size(char *str, char *charset, char **dest)
{
	int		i;
	int		j;
	int		word_begin;

	i = 0;
	j = 0;
	while (str[i])
	{
		word_begin = i;
		if ((i = ft_is_str(str, charset, i)))
		{
			if (!(dest[j] = (char*)malloc(sizeof(char) * (i - word_begin + 1))))
				return (NULL);
			j++;
		}
		i = ft_is_charset(str, charset, i);
	}
	if (!(dest[j] = (char*)malloc(sizeof(char))))
		return (NULL);
	dest[j] = NULL;
	return (dest);
}

char	**ft_set_dest_size(char *str, char *charset)
{
	char	**dest;
	int		i;
	int		dest_size;

	i = 0;
	dest_size = 0;
	while (str[i])
	{
		if ((i = ft_is_str(str, charset, i)))
			dest_size++;
		i = ft_is_charset(str, charset, i);
	}
	if (!(dest = (char**)malloc(sizeof(char*) * (dest_size + 1))))
		return (NULL);
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	int		word_begin;
	char	**dest;

	i = 0;
	j = 0;
	dest = ft_set_word_size(str, charset, ft_set_dest_size(str, charset));
	while (str[i])
	{
		k = 0;
		word_begin = i;
		if ((i = ft_is_str(str, charset, i)))
		{
			while (i - word_begin > 0)
				dest[j][k++] = str[word_begin++];
			dest[j][k] = '\0';
			j++;
		}
		i = ft_is_charset(str, charset, i);
	}
	return (dest);
}

/*
int		ft_count_words(const char *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

char	**ft_size_words(const char *s, char c, char **dest)
{
	int i;
	int j;
	int size_word;

	i = 0;
	j = 0;
	while (s[i])
	{
		size_word = 0;
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				++size_word;
				++i;
			}
			dest[j] = malloc(sizeof(char) * (size_word + 1));
			j++;
			if (!dest)
				return (NULL);
		}
		else
			i++;
	}
	return (dest);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**dest;

	i = 0;
	j = 0;
	dest = malloc(sizeof(char*) * ft_count_words(s, c));
	if (!dest)
		return (NULL);
	ft_size_words(s, c, dest);
	while (s[i])
	{
		k = 0;
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				dest[j][k++] = s[i++];
			dest[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	return (dest);
}*/
