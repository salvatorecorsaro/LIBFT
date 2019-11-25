/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 13:45:02 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/25 12:12:32 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*aux;

	if (alst == NULL)
		return ;
	aux = *alst;
	if (*alst == NULL)
		*alst = new;
	else
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
}
