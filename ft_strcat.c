/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:00:24 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 16:18:56 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *dest, char *src)
{
	int			i;
	int			a;

	a = 0;
	i = 0;
	while (dest[a] != '\0')
		a++;
	while (src[i] != '\0')
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (dest);
}
