/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:51:58 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 16:20:06 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		end;

	i = -1;
	end = ft_strlen(s);
	if (s && c == '\0')
		return ((char *)&s[end]);
	if (s && c)
		while (s[++i])
			if (s[i] == c)
				return (s + i);
	return (0);
}
