/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:27:50 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:27:51 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstat(t_list **alst, size_t n)
{
	t_list	*tmp;

	if (!alst || !n)
		return (NULL);
	tmp = *alst;
	while (n-- && tmp->next != NULL)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	return (tmp);
}
