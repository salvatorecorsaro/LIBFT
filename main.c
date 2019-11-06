/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:38:39 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/06 11:54:59 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

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

int		main(void)
{
	char	dest[50];
	char	srce[50];

	strcpy(dest, "hola mundo");
	strcpy(srce, "hello world");
	return (0);
}
