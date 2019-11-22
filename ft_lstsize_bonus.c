/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 16:31:21 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/22 16:31:24 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int			counter;
	t_list		*current;

	counter = 0;
	current = lst;
	if (lst)
		while (current != NULL)
		{
			counter++;
			current = current->next;
		}
	return (counter);
}
