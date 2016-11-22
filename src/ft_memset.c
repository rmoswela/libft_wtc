/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:48:57 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 11:17:36 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function that fills first n bytes of the memory area 
 * pointed by src with constant c*/
void			*ft_memset(void *src, int c, size_t n)
{
	size_t		loop;
	unsigned char	*ptr;

	ptr = (unsigned char *)src;
	loop = 0;
	while (loop < n)
		ptr[loop++] =(unsigned char) c;
	return (src);
}
