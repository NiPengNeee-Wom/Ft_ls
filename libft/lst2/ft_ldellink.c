/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldellink.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:29:26 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:29:26 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ldellink(t_lst *lst)
{
	if (!lst)
		return ;
	if (lst->prev != NULL)
		lst->prev->next = lst->next;
	if (lst->next != NULL)
		lst->next->prev = lst->prev;
	lst->prev = NULL;
	lst->next = NULL;
}
