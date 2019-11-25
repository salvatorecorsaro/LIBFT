/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:43:02 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/25 16:06:06 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int			s;
	int			i;
	char		*stored;

	s = 0;
	i = 0;
	while (src[s] != '\0')
		s++;
	if (!(stored = (char *)malloc((s + 1) * (sizeof(char)))))
		return (0);
	while (src[i] != '\0')
	{
		stored[i] = src[i];
		i++;
	}
	stored[i] = '\0';
	return (stored);
}
