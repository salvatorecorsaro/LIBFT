/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:21:42 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/21 16:23:27 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		start_set_finder(char const *s1, char const *set)
{
	int		i;
	int		counter;
	char	to_find;

	i = 0;
	counter = 0;
	to_find = (char)set;
	while (s1[i] == to_find)
	{
		counter++;
		i++;
	}
	return (counter);
}

static int		end_set_finder(char const *s1, char const *set)
{
	int		i;
	int		counter;
	int		len;
	char	to_find;

	i = 0;
	counter = 0;
	to_find = (char)set;
	len = ft_strlen((char *)s1);
	while (s1[len - i] == to_find)
	{
		counter++;
		i++;
	}
	return (counter);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*newstr;
	int		size;

	i = 0;
	size = 0;
	newstr = NULL;
	if (s1 && set)
	{
		size = ft_strlen((char *)s1);
		newstr = ft_strdup((char *)s1);
		if (newstr == NULL)
			return (NULL);
		i = start_set_finder(newstr, set);
		if (i == size)
			return (malloc(0));
		size = size - i;
		newstr = ft_substr(newstr, i, size);
		i = end_set_finder(newstr, set);
		size = size - i;
		newstr = ft_substr(newstr, 0, size);
		return (newstr);
	}
	return (NULL);
}

