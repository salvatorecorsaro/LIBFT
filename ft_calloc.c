/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:10:54 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 16:11:04 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t		total;
	void		*r;

	total = nitems * size;
	if (!(r = malloc(total)))
		return (0);
	ft_bzero(r, total);
	return (r);
}
