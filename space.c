/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:22:21 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:22:22 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	space(int current, int max, int type, int atr)
{
	int	space;

	space = 0;
	if (type == 1)
		space = max - current + 2;
	else if (type == 2)
	{
		if (atr == 1)
			space = max - current + 1;
		else if (atr == 0)
			space = max - current + 2;
	}
	else if (type == 3)
		space = max - current;
	while (space)
	{
		ft_putchar(' ');
		space--;
	}
}

int		ln(int n)
{
	int	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

int		atr(char *str)
{
	if (listxattr(str, NULL, 0, XATTR_NOFOLLOW) > 0)
		return (1);
	else
		return (0);
}
