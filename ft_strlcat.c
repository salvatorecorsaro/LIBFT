/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:53:18 by scorsaro          #+#    #+#             */
/*   Updated: 2019/10/12 21:09:48 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int d;
	unsigned int s;
	unsigned int w;
	unsigned int r;

	d = 0;
	s = 0;
	w = 0;
	r = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	if (size <= d)
		r = s + size;
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
