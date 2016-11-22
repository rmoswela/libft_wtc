/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 10:27:54 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 16:56:35 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to locate string sub from initial number of bytes len,
 * returning pointer to first occurance of sub or NULL if nothing found*/
char		*ft_strnstr(char *str, char *sub, size_t len)
{
	size_t	loop;
	size_t	loop2;
	
	loop2 = 0;
	if (*sub == '\0')
		return (NULL);
	while (*str && loop2 < len)
	{
		loop = 0;
		while (str[loop] == sub[loop])
		{
			if (sub[loop + 1] == '\0')
				return (str);
			loop++;
		}
		str++;
		loop2++;
	}
	return (NULL);
}
