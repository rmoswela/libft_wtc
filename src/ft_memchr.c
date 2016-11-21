/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:54:54 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/21 12:36:58 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*function to scan initial n bytes of memory area s to
 * locate first occurance of character c*/
void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	iC;
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	iC = c;
	while (i < n)
	{
		if (*ptr == iC)
			return(ptr);
		i++;
		ptr++;
	}
	return NULL;
}
