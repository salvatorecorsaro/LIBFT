/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 16:31:42 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/22 17:17:31 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;
	t_list	*next_one;

	last = lst;
	if (lst)
	{
		last = lst;
		next_one = lst;
		while (next_one != NULL)
		{
			last = next_one;
			next_one = next_one->next;
		}
	}
	return (last);
}
