/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:03:46 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/07 19:50:23 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*dest;
	const char		*srce;
	size_t			aux;
	size_t			i;

	dest = dst;
	srce = src;
	aux = len - 1;
	i = -1;
	if (src && len)
	{
		if (&dest > &srce)
		{
			while (++i < len)
			{
				dest[aux] = srce[aux];
				aux--;
			}
		}
		while (++i < len)
			dest[i] = srce[i];
	}
	return (dest);
}
