#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
    unsigned int i;

    i = -1;
    while (str)
        if (str[++i] == c)
            return ((unsigned char *)str + i);
    return (0);
}

int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;

    ret = ft_strchr(str, ch);

    printf("String after |%c| is - |%s|\n", ch, ret);

    return (0);
}
