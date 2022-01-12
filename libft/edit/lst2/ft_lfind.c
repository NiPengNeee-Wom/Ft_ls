/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lfind.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:23:30 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:23:31 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst *ft_lfind(t_lst **alst, char *data)
{
	t_lst	*tmp;

	if (!alst || !data)
		return (NULL);
	tmp = *alst;
	while (tmp)
	{
		if (!ft_strcmp(tmp->file, data))
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
