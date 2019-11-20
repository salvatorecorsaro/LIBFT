/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:08:31 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 17:24:51 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
const void *restrict src, int c, size_t n)
{
	char	*dest;
	const char	*srce;
	size_t	i;
	void	*ret;


	dest = dst;
	srce = src;
	i = -1;
	if (dest && srce && c && n)
	{
		while (++i < n && srce[i] != c)
			dest[i] = srce[i];
		if (srce[i] == c)
		{
			ret = dest + i + 1;
			return (ret);
		}
	}
	return (0);
}
