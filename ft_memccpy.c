/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:08:31 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/06 11:46:56 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *restrict dst,
const void *restrict src, int c, size_t n)
{
	char	*dest;
	char	*srce;
	size_t	i;

	dest = dst;
	srce = src;
	i = -1;
	if (dest && srce && c && n)
	{
		while (++i < n && srce[i] != c)
			dest[i] = srce[i];
		if (srce[i] == c)
			return (srce[i + 1]);
	}
	return (0);
}
