/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lfirst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:29:32 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:29:33 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst *ft_lfirst(t_lst **alst)
{
	t_lst	*tmp;

	if (!alst)
		return (NULL);
	tmp = *alst;
	while (tmp->prev != NULL)
		tmp = tmp->prev;
	return (tmp);
}
