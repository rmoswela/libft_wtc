/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:11:45 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 11:18:39 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*funtion to copy n bytes from string src to dest and if src is less than
 * n the rest dest is filled with nul characters*/
char		*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	loop;

	loop = 0;
	while (src[loop] != '\0' && loop < n)
	{
		dest[loop] = src[loop];
		loop++;
	}
	dest[loop] = '\0';
	return (dest);
}
