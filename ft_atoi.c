/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 18:27:24 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/14 18:28:36 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char const *str)
{
	int		is_negative;
	int		value;

	is_negative = 0;
	value = 0;
	str = ft_strtrim(str);
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		is_negative = 1;
		str++;
	}
	while ((*str <= '9') && (*str >= '0'))
	{
		value = (value * 10) - (*str - '0');
		str++;
	}
	if (!is_negative)
		value *= -1;
	return (value);
}