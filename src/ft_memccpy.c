/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 09:56:59 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 11:20:15 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to copy n bytes from src to dest
 * if character c is occurs in src the copy stops
 * and pointer to byte after copying character c to dest is returned*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*cDest;
	unsigned char	*cSrc;
	unsigned char	iC;
	size_t			loop;

	loop = 0;
	iC = (unsigned char)c;
	cDest = (unsigned char *)dest;
	cSrc = (unsigned char *)src;
	while (loop < n && cDest != cSrc)
	{
		if (*cSrc != iC)
			cDest[loop] = *cSrc++;
		else
		{
			cDest[loop] = *cSrc++;
			return (cDest);
		}
		loop++;
	}
	return NULL;
}
