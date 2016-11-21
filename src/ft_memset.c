/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:48:57 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/21 10:49:05 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*function that fills first n bytes of the memory area 
 * pointed by src with constant c*/
void	*ft_memset(void *src, int c, size_t n)
{
	size_t i;
	unsigned char *ptr;
	ptr = (unsigned char *)src;
	i = 0;
	while (i < n)
		ptr[i++] =(unsigned char) c;
	return (src);
}
