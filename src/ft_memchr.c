/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:54:54 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 11:20:28 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to scan initial n bytes of memory area s to
 * locate first occurance of character c*/
void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	iC;
	unsigned char	*ptr;
	size_t			loop;

	ptr = (unsigned char *)s;
	loop = 0;
	iC = c;
	while (loop < n)
	{
		if (*ptr == iC)
			return(ptr);
		loop++;
		ptr++;
	}
	return NULL;
}
