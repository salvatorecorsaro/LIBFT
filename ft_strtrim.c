/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:21:42 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/21 11:33:00 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		start_set_finder(char const *s1, char const *set)
{
	int i;
	int counter;

	i = 0;
	while (s1[i] == set)
	{
		counter++;
		i++;
	}
	return (counter);
}

int		end_set_finder(char const *s1, char const *set)
{
	int i;
	int counter;
	int len;

	i = 0;
	len = ft_strlen(s1);
	while (s1[len - i] == set)
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
		size = ft_strlen(s1);
		newstr = ft_strdup(s1);
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

