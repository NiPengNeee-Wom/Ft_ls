/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ladd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:29:05 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:29:06 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_ladd(t_lst **alst, t_lst *new)
{
	if (!new || !alst)
		return ;
	new->next = *alst;
	(*alst)->prev = new;
	new->prev = NULL;
	*alst = new;
}
