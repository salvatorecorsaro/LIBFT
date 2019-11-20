#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = -1;
    if (s)
        while (s[++i])
            ft_putchar_fd(s[i], fd);
}