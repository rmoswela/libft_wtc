/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 09:56:59 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/21 10:45:13 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*function to copy n bytes from src to dest
 * if character c is occurs in src the copy stops
 * and pointer to byte after copying character c to dest is returned*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*cDest;
	unsigned char	*cSrc;
	unsigned char	iC;
	size_t			i;

	i = 0;
	iC = (unsigned char)c;
	cDest = (unsigned char *)dest;
	cSrc = (unsigned char *)src;
	while (i < n && cDest != cSrc)
	{
		if (*cSrc != iC)
			cDest[i] = *cSrc++;
		else
		{
			cDest[i] = *cSrc++;
			return (cDest);
		}
		i++;
	}
	return NULL;
}
