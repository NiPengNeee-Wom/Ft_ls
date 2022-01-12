/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lisfirst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:29:48 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:29:49 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lisfirst(t_lst **alst)
{
	if (!alst)
		return (0);
	if ((*alst)->prev == NULL)
		return (1);
	return (0);
}