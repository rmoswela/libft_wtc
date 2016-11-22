/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 09:53:07 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 15:59:23 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function locates a character in a string and return pointer to 
 * first occurance of that character, or NULL if not found*/
char	*ft_strchr(char *s, int c)
{
	while (*s && *s != c)
		s++;
	if (*s)
		return(s);
	else
		return NULL;
}
