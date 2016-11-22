/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 06:57:54 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 18:50:18 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function allocates memory with malloc and returns a fresh memory area
 * and the memory allocated is initialized to zero, if it fails return NULL*/
void		*ft_memalloc(size_t size)
{
	void	*ptr;

	if (size == 0)
		return (NULL);
	else
	{
		ptr = malloc(size);
		if (ptr == NULL)
			return (NULL);
		else
		{
			ft_bzero(ptr, size);
			return (ptr);
		}
	}
}
