/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:14:39 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/22 13:19:24 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*stri1;
	char	*stri2;
	size_t	i;

	stri1 = (char *)str1;
	stri2 = (char *)str2;
	i = -1;
	if (stri1 == NULL && stri2 == NULL)
		return (0);
	while (++i < n)
		if (stri1[i] != stri2[i])
			return ((unsigned char)stri1[i] - (unsigned char)stri2[i]);
	return (0);
}
