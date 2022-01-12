/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:32:14 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:32:14 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*swap;

	swap = dest;
	while (*swap)
		swap++;
	while (*src)
		*(swap++) = *(src++);
	*swap = '\0';
	return (dest);
}
