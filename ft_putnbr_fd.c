#include"libft.h"

void    ft_putnbr_fd(int n, int fd)
{
	long int lnb;

	lnb = n;
	if (lnb < 0)
	{
		ft_putchar_fd('-', fd);
		lnb = -lnb;
	}
	if (lnb > 9)
		ft_putnbr_fd(lnb / 10, fd);
	ft_putchar_fd(lnb % 10 + '0', fd);
}