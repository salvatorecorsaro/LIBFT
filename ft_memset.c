/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:47:27 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 16:16:26 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char		*dest;
	size_t		i;

	dest = b;
	i = -1;
	if (b && len)
		while (++i < len)
			dest[i] = c;
	return (b);
}
