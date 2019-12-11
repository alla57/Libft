/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:55:08 by alboumed          #+#    #+#             */
/*   Updated: 2019/12/11 21:18:39 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	if (!count || !size)
		return (dest = malloc(count * size));
	if (!(dest = (void*)malloc(size * count)))
		return (NULL);
	return (ft_bzero(dest, count));
}
