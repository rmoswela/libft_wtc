/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 10:26:47 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 16:55:45 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function that locates first occurance of substring in sub in string src
 * and null terminating char are not compared, it return pointer to the
 * first occurance or NULL if nothing found*/
char		*ft_strstr(char *src, char *sub)
{
	size_t	loop;

	if (*sub == '\0')
		return (NULL);
	while (*src)
	{
		loop = 0;
		while (src[loop] == sub[loop])
		{
			if (sub[loop + 1] == '\0')
				return (src);
			loop++;
		}
		src++;
	}
	return (NULL);
}
