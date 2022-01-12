/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flagn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:21:38 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:21:38 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	noflagn(t_lst **f, t_env *e)
{
	if (!e->flag_o)
	{
		ft_putstr((*f)->user);
		space(ft_strlen((*f)->user),\
					ft_strlen(grt(&(e->a_l), 1, 0)->user), 1, 1);
	}
	ft_putstr((*f)->group);
	space(ft_strlen((*f)->group), ft_strlen(grt(&(e->a_l), 3, 0)->group), 3, 1);
}

void	flagn(t_lst **f, t_env *e)
{
	if (!e->flag_o)
	{
		ft_putnbr((*f)->user2);
		space(ft_strlen((*f)->user),\
					ft_strlen(grt(&(e->a_l), 1, 0)->user), 1, 1);
	}
	ft_putnbr((*f)->group2);
	space(ft_strlen((*f)->group), ft_strlen(grt(&(e->a_l), 3, 0)->group), 3, 1);
}
