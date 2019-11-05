/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:08:31 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/05 19:32:35 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    char            *dest;
    char            *srce;
    size_t          i;

    dest = dst;
    srce = src;
    i = -1;
    if (dest && srce && c && n)
        while (++i < n && src[i] != c)
            dest[i] = src[i];
        if (src[i] == c)
            return (src[i + 1]);
    return (0);
}