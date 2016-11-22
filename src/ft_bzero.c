/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 07:42:37 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 11:19:40 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to set first n bytes of area starting from s to zero*/
void			ft_bzero(void *s, size_t n)
{
	size_t		loop;
	unsigned char	*ptr;

	/*assign a pointer to char to s*/
	ptr = (unsigned char *)s;
	loop = 0;
	/*loop throught the string assigning it nul*/
	while (loop < n)
		ptr[loop++] = '\0';
	ptr[loop] = '\0';
}
