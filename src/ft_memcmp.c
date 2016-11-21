/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:38:49 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/21 13:15:06 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*function to compare initial n bytes of two blocks of memory and
 * return less than, equal to or greater than from s1 to s2*/
int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cS1;
	unsigned char	*cS2;
	size_t			i;
	i = 0;
	cS1 = (unsigned char *)s1;
	cS2 = (unsigned char *)s2;
	while (i < n)
	{
		if (cS1[i] == cS2[i])
		{
			/*continue iteration*/
		}
		else
			return(cS1[i] - cS2[i]);
		i++;
	}
	return (0);
}
