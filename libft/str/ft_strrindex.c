/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrindex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:34:48 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:34:48 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strrindex(const char *s, int c)
{
	int	ret;
	int	i;

	i = 0;
	ret = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			ret = i;
		i++;
	}
	if (s[i] == (char)c)
		ret = i;
	return (ret);
}
