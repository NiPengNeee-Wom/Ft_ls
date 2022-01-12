/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:31:05 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:31:06 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dswap;
	const char	*sswap;

	if (n && dest && src)
	{
		dswap = dest;
		sswap = src;
		while (n--)
		{
			if (*sswap == c)
			{
				*dswap++ = *sswap++;
				return (dswap);
			}
			*dswap++ = *sswap++;
		}
	}
	return (0);
}
