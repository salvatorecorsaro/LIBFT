/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:53:18 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/25 16:03:30 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		d;
	size_t		s;
	size_t		w;
	size_t		r;

	w = 0;
	r = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size <= d)
		return (r = s + size);
	else
		r = s + d;
	while (src[w] != '\0' && d + 1 < size)
	{
		dest[d] = src[w];
		d++;
		w++;
	}
	dest[d] = '\0';
	return (r);
}
