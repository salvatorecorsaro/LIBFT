/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:51:58 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 17:33:47 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		end;
	char	*str;

	i = -1;
	str = (char *)s;
	end = ft_strlen(str);
	if (str && c == '\0')
		return ((char *)&str[end]);
	if (s && c)
		while (s[++i])
			if (s[i] == c)
				return (str + i);
	return (0);
}
