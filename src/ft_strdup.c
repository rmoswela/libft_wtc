/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:25:42 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/21 13:43:55 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to allocate memory, copy string str and return a pointer to it
 * if insufficient memory is available null is return
 * it always terminates the string copied*/
char		*ft_strdup(char *src)
{
	int		iLen;
	char	*dest;

	iLen = ft_strlen(src);
	/*allocates memory*/
	dest = (char *)malloc(sizeof(char) + 1);
	/*terminates str to be copied with nul char*/
	dest[iLen] = '\0';
	if (dest == NULL)
		EXIT_FAILURE;
	else
		ft_strcpy(dest, src);
	return (dest);
}
