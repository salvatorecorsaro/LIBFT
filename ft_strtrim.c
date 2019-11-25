/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:21:42 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/25 16:02:25 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	char	*trimed;
	int		test;

	if (s1 == NULL || set == NULL)
		return (NULL);
	test = ft_strncmp((char *)set, "", ft_strlen(set));
	if (test == 0)
		return (ft_strdup((char *)s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	len = ft_strlen(&s1[start]);
	if (len != 0)
		while (s1[start + len - 1]
				&& ft_strchr(set, s1[start + len - 1]) != NULL)
			len--;
	if (!(trimed = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	trimed = ft_strncpy(trimed, (char *)&s1[start], len);
	trimed[len] = '\0';
	return (trimed);
}
