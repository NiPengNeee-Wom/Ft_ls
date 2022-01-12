/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:29:15 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:29:16 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lat(t_lst **alst, size_t n)
{
	t_lst	*tmp;

	if (!alst || !n)
		return (NULL);
	tmp = *alst;
	n--;
	while (n-- && tmp->next != NULL)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	return (tmp);
}
