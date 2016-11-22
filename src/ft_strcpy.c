/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:52:30 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 11:18:12 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to copy string src to dest including terminating character*/
char		*ft_strcpy(char *dest, char *src)
{
	size_t	loop;

	loop = 0;
	while (src[loop])
	{
		dest[loop] = src[loop];
		loop++;
	}
	dest[loop] = '\0';
	return (dest);
}
