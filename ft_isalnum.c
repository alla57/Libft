/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:17:30 by alboumed          #+#    #+#             */
/*   Updated: 2019/10/13 16:24:05 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c >= 'A' && c <= && 'Z') || (c >= 'a' && c <= 'z') ||
			(c >= '0' && c <= '9'))
		return 1;
	return (0);
}
