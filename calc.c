/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:20:59 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:21:06 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		calc(t_lst **a_l)
{
	int		j;
	t_lst	*tmp;

	j = 0;
	tmp = *a_l;
	while (tmp && (tmp->file)[0] != '.')
	{
		j += (tmp->block);
		tmp = tmp->next;
	}
	ft_putnbr(j);
	ft_putchar('\n');
}

void		calc2(t_lst **a_l)
{
	int		j;
	t_lst	*tmp;

	j = 0;
	tmp = *a_l;
	while (tmp)
	{
		j += (tmp->block);
		tmp = tmp->next;
	}
	ft_putnbr(j);
	ft_putchar('\n');
}
