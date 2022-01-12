/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:30:30 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:30:31 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lswap(t_lst *lst1, t_lst *lst2)
{
	t_lst	*target;
	t_lst	*swap;

	if (ft_lisfirst(&lst1))
	{
		swap = lst2;
		lst2 = lst1;
		lst1 = swap;
	}
	if (lst1->prev != lst2)
		target = lst1->prev;
	else
		target = lst1;
	ft_ldellink(lst1);
	ft_lrplc(lst2, lst1);
	ft_linser(&target, lst2);
}
