/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:28:37 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:28:38 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list **alst)
{
	t_list	*tmp;

	if (!alst)
		return (NULL);
	tmp = *alst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
