#include <stddef.h>
#include <stdio.h>
#include <string.h>

void    *ft_memchr(const void *str, int c, size_t n)
{
    char            *stri;
    unsigned int    to_find;
    size_t          i;

    stri = str;
    to_find = (unsigned int) c;
    i = -1;
    if (stri && to_find && n)
        while (++i < n)
            if (stri[i] == to_find)
                return (stri + i);
    return (0);
}



int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
