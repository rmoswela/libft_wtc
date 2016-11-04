/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 07:42:37 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/04 22:58:40 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*function writes n zeroed bytes to string s*/
void				ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	/*assign a pointer to char to s*/
	ptr = (unsigned char *)s;
	i = 0;
	/*loop throught the string assigning it nul*/
	while (i < n)
		ptr[i++] = '\0';
	ptr[i] = '\0';
}
