/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:01:40 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/21 10:34:38 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*function to copy n bytes from memory area src to memory area dest
 * and the two memory areas may overlap*/
void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cDest;
	unsigned char	*cSrc;
	char			temp[n];
	size_t			i;

	cDest = (unsigned char *)dest;
	cSrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = *cSrc++;
		cDest[i] = temp[i];
		i++;
	}
	cDest[i] = '\0';
	return(cDest);
}
