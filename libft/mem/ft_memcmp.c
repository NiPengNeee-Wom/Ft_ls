/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:31:17 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:31:17 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *swap1;
	const unsigned char *swap2;

	if (s1 != s2 && n)
	{
		swap1 = (const unsigned char *)s1;
		swap2 = (const unsigned char *)s2;
		while (n--)
		{
			if (*swap1 != *swap2)
				return (*swap1 - *swap2);
			swap1++;
			swap2++;
		}
	}
	return (0);
}
