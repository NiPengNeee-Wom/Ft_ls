/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:31:52 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:31:53 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *old, size_t old_size, size_t new_size)
{
	void	*new;

	if (!(new = (void *)ft_memalloc(new_size ? sizeof(old) * new_size : 1)))
		return (NULL);
	if (old)
	{
		ft_memcpy(new, old, (old_size > new_size) ? (new_size) : (old_size));
		ft_memdel((void *)&old);
	}
	return (new);
}
