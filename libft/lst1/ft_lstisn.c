/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstisn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:28:24 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:28:25 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstisn(t_list **alst, t_list *lst)
{
	t_list	*tmp;
	size_t	i;

	if (!alst || !lst)
		return (0);
	if (*alst == lst)
		return (1);
	tmp = *alst;
	i = 2;
	while (tmp->next != NULL && tmp->next != lst)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp->next != lst)
		return (0);
	return (i);
}
