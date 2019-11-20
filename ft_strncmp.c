/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:37:49 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 16:21:05 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int			lenght_str(char *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0' && i < n)
		i++;
	return (i);
}

int						lenght_cmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	ls1;
	unsigned int	ls2;
	int				ret;

	ls1 = lenght_str(s1, n);
	ls2 = lenght_str(s2, n);
	if (ls1 > ls2)
		ret = 1;
	else if (ls2 > ls1)
		ret = -1;
	else
		ret = 0;
	return (ret);
}

int						ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				ret;

	i = 0;
	ret = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && !ret && i < n)
	{
		if (s1[i] > s2[i])
			ret = 1;
		else if (s1[i] < s2[i])
			ret = -1;
		i++;
	}
	if (!ret)
		ret = lenght_cmp(s1, s2, n);
	return (ret);
}
