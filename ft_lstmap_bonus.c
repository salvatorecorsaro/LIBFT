/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 12:15:45 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/25 12:15:49 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *ls, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*aux;

	if (!ls && !del)
		return (NULL);
	aux = ls;
	if (!(new = ft_lstnew(f(aux->content))))
		return (NULL);
	aux = aux->next;
	while (aux)
	{
		if (!(tmp = ft_lstnew(f(aux->content))))
			return (NULL);
		ft_lstadd_back(&new, tmp);
		aux = aux->next;
	}
	return (new);
}
