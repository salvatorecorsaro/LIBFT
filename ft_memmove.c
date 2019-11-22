/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:03:46 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/22 12:23:09 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*dest;
	char			*srce;
	size_t			i;

	dest = (void *)dst;
	srce = (void *)src;
	i = -1;
	if (dst == 0 && src == 0)
		return (0);
	if (srce == dest)
		return (dest);
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
			dest[i] = srce[i];
	}
	else
		while (++i < len)
			dest[i] = srce[i];
	return (dest);
}
