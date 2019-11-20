/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 15:57:23 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 16:23:15 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = NULL;
	if (s != NULL)
	{
		ptr = malloc((len + 1) * sizeof(char));
		if (ptr == NULL)
			return (NULL);
		ptr[len] = '\0';
		while (i < len + start)
		{
			if (i >= start)
				ptr[i - start] = s[i];
			i++;
		}
		return (ptr);
	}
	return (NULL);
}
