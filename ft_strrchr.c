#include <stdio.h>
#include <string.h>

char    *ft_strrchr(const char *str, int c)
{
    unsigned int    i;
    const char            *aux;      

    i = 0;
    aux = str;
    while(str[i] != '\0')
    {
        if (str[i] == c)
            aux = str + i;
        i++;
    }
    return (aux);
    //return ((aux != 0) ? (unsigned char *)aux : 0);
}

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}