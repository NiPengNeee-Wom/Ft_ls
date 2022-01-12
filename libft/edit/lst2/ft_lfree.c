/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lfree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:23:35 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:23:36 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lfree(t_lst **lst)
{
	ft_memdel((void *)&((*lst)->user));
	ft_memdel((void *)&((*lst)->group));
	ft_memdel((void *)&((*lst)->dir));
	ft_memdel((void *)&((*lst)->file));
	(*lst)->next = NULL;
	(*lst)->prev = NULL;
	ft_memdel((void *)lst);
}
