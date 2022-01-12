/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:34:35 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:34:36 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t len;

	if (!*s2)
		return ((char *)s1);
	len = 0;
	while (s2[len])
		len++;
	while (n-- >= len && *s1)
	{
		if (*s1 == *s2 && !ft_memcmp(s1, s2, len))
			return ((char *)s1);
		s1++;
	}
	return (0);
}
