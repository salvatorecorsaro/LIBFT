/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:14:39 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 16:15:48 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*stri1;
	char	*stri2;
	size_t	i;

	stri1 = str1;
	stri2 = str2;
	i = -1;
	if (stri1 && stri2 && n)
		while (++i < n && stri1 && str2 && stri1 == stri2)
			;
	return ((int)(stri1[i] - stri2[i]));
}
