/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:34:06 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:34:07 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i] && i != n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i != n && !src[i])
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
