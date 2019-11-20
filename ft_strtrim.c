/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:21:42 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 16:21:51 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int start_set_finder(char const *s1, char const *set)
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

int end_set_finder(char const *s1, char const *set)
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


char *ft_strtrim(char const *s1, char const *set)
{
	int		i;

	i = 0;

	if (s1)
		while (s1[i] == set)
				i++;
		while (s1)
}
