/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:34:42 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:34:42 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *ret;

	ret = 0;
	while (*s)
	{
		if (*s == (char)c)
			ret = s;
		s++;
	}
	if (*s == (char)c)
		ret = s;
	return ((char *)ret);
}
