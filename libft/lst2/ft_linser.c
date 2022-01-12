/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:29:38 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:29:39 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_linser(t_lst **alst, t_lst *new)
{
	if (!alst || !new)
		return ;
	new->next = (*alst)->next;
	new->prev = *alst;
	(*alst)->next = new;
	if (new->next != NULL)
		new->next->prev = new;
}
