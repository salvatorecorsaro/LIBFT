/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorsaro <scorsaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 16:32:00 by scorsaro          #+#    #+#             */
/*   Updated: 2019/11/22 16:32:01 by scorsaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void
*))
{
	if(*lst)
	{
		ft_lstdelone((ft_lstlast(*lst)),del);
		ft_lstclear(*lst, del);
		ft_lstdelone(*lst, del);
}
