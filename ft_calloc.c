/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:55:08 by alboumed          #+#    #+#             */
/*   Updated: 2019/10/23 15:08:57 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*dest;

	i = 0;
	if (count == 0 || size == 0)
		return (NULL);
	dest = malloc(count * size);
	while (i < count)
	{
		((char*)dest)[i] = 0;
		i++;
	}
	return (dest);
}
