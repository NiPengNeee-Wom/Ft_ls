/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llast.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:30:12 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:30:12 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst *ft_llast(t_lst **alst)
{
	t_lst	*tmp;

	if (!alst)
		return (NULL);
	tmp = *alst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
