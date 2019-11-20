/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:40:12 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 16:16:04 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char			*dest;
	const char		*srce;
	size_t			i;

	dest = dst;
	srce = src;
	i = -1;
	if (dest && srce && n)
		while (++i < n)
			dest[i] = srce[i];
	return (dst);
}
