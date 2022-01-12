/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debugstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:24:25 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:24:26 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_debugstr(char *name, char *str)
{
	ft_putchar_clr('<', "r");
	ft_putstr_clr(name, "r");
	ft_putstr_clr(":", "r");
	ft_putstr_clr(str, "g");
	ft_putendl_clr(">", "r");
}
