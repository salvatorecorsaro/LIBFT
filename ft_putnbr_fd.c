/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:17:31 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/20 16:17:47 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
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
