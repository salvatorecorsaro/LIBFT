/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:12:57 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 16:14:26 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char			*stri;
	unsigned int	to_find;
	size_t			i;

	stri = str;
	to_find = (unsigned int)c;
	i = -1;
	if (stri && to_find && n)
		while (++i < n)
			if (stri[i] == to_find)
				return (stri + i);
	return (0);
}
