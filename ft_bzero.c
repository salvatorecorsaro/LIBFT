/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:12:23 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/05 17:15:39 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	char		*dest;
	size_t		i;

	dest = s;
	i = -1;
	if (s && n)
		while (++i < n)
			dest[i] = 0;	
}
