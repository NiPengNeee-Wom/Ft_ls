/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:23:07 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:23:07 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstfind(t_list **alst, void *data)
{
	t_list	*tmp;

	if (!alst || !data)
		return (NULL);
	tmp = *alst;
	while (tmp->next != NULL)
	{
		if (!ft_memcmp(tmp->content, data, tmp->content_size))
			return (tmp);
		tmp = tmp->next;
	}
	if (!ft_memcmp(tmp->content, data, tmp->content_size))
		return (tmp);
	return (NULL);
}
