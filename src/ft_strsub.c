/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 11:47:04 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 23:26:51 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to return a substring from str, starting from start and is of length
 * len, if start and len aren't referring to a valid string behaviour
 * is undefined*/
char		*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	loop;

	loop = 0;
	sub_str = (char *)malloc(sizeof(char) * len) + 1;
	if (sub_str == NULL)
		return (NULL);
	while (loop < len && str[start] != '\0')
		sub_str[loop++] = str[start++];
	sub_str[loop] = '\0';
	return (sub_str);
}
