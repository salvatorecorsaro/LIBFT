/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 13:23:02 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/21 13:30:28 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;
	t_list	*next_one;

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
