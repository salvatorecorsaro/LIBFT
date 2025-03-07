/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:10:12 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/21 16:25:45 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char		*dest;
	size_t		i;

	dest = s;
	i = -1;
	while (++i < n)
		dest[i] = 0;
}
