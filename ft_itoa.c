/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 11:21:03 by alboumed          #+#    #+#             */
/*   Updated: 2019/10/19 18:06:21 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		i;
	int		temp;
	char	*s;

	i = 0;
	if (n <= 0)
		i++;
	temp = n;
	temp *= 10;
	while (temp /= 10)
		i++;
	if (!(s = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	s[i] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
		s[0] = '-';
	while (--i > 0)
	{
		s[i] = ((n >= 0) ? 1 : -1) * (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}

int main()
{
	int n = 3;
	printf("%s", ft_itoa(n));
	return (0);
}
