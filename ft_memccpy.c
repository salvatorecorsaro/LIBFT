/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:08:31 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/22 12:12:36 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst,
const void *src, int c, size_t n)
{
	unsigned char		*dest;
	unsigned char		*srce;
	size_t				i;

	dest = (unsigned char *)dst;
	srce = (unsigned char *)src;
	i = -1;
	while (++i < n)
	{
		dest[i] = srce[i];
		if (dest[i] == (unsigned char)c)
			return ((void *)(dest + i + 1));
	}
	return (0);
}
