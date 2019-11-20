/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:52:04 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 17:35:48 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	int a;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		a = 0;
		while (haystack[i + a] != '\0' && haystack[i + a] == needle[a])
		{
			if (needle[a + 1] == '\0')
				return ((char *)&haystack[i]);
			a++;
		}
		i++;
	}
	return (0);
}
