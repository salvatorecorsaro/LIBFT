/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:28:02 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/25 16:03:40 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if ((joined = (char*)malloc(sizeof(char)
			* (ft_strlen((char *)s1) + ft_strlen(s2) + 1))) == NULL)
		return (NULL);
	joined = ft_strcpy(joined, (char *)s1);
	return (ft_strcat(joined, (char *)s2));
}
