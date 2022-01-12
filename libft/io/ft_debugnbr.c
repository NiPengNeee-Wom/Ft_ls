/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debugnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:24:19 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:24:19 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_debugnbr(char *name, int nbr)
{
	ft_putchar_clr('<', "r");
	ft_putstr_clr(name, "r");
	ft_putstr_clr(":", "r");
	ft_putnbr_clr(nbr, "g");
	ft_putendl_clr(">", "r");
}
