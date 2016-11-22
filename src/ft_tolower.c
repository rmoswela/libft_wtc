/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 12:11:31 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 17:47:37 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*function to convert character to lower case, if its an alphabet letter
 * returns converted alphabet value or value of the initial character*/
int		ft_tolower(int c)
{
	int 	a;

	a = (unsigned char) c;
	if (a >= 65 && a <= 90)
	{
		a = a + 32;
		return (a);
	}
	else
		return (a);
}
