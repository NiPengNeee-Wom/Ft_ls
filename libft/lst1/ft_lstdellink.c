/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdellink.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:28:03 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:28:03 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdellink(t_list **alst, t_list *lst)
{
	t_list	*tmp;

	if (!alst || !lst)
		return ;
	tmp = *alst;
	while (tmp->next != NULL && tmp->next != lst)
		tmp = tmp->next;
	if (tmp->next == NULL)
		return ;
	tmp->next = lst->next;
	lst->next = NULL;
}
