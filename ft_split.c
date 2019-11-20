/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:04:14 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 16:18:47 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	countword(const char *s, char sep)
{
	int				i;
	unsigned int	counter;

	counter = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != sep && (i == 0 || s[i - 1] == sep))
			counter++;
		i++;
	}
	return (counter);
}

char			**ft_split(char const *s, char c)
{
	char		**ret;
	size_t		i;
	size_t		j;
	size_t		len;

	if (!s || !c)
		return (0);
	ret = malloc((countword(s, c) + 1) * (sizeof(char *)));
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			len = 0;
			while (s[i + len] && (s[i + len] != c))
				len++;
			ret[j++] = ft_substr(s, i, len);
			i = i + len;
		}
	}
	ret[j] = NULL;
	return (ret);
}
