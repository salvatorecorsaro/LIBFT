/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 19:39:15 by marvin            #+#    #+#             */
/*   Updated: 2019/11/08 19:39:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

int     ft_memcmp(const void *str1, const void *str2, size_t n)
{
    char    *stri1;
    char    *stri2;
    size_t  i;

    stri1 = str1;
    stri2 = str2;
    i = -1;
    if (stri1 && stri2 && n)
        while (++i < n && stri1 && str2 && stri1 == stri2)
        ;
    return ((int)(stri1[i] - stri2[i]));
}

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}