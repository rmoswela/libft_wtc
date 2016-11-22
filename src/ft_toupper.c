/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 12:00:31 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 17:50:39 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to convert alphabet value to an upper case and returns value
 * of the convert alphabet or value of the initial character*/
int		ft_toupper(int c)
{
	int	a;

	a = (unsigned char) c;
	if (a >= 97 && a <= 122)
	{
		a = a - 32;
		return (a);
	}
	else
		return (a);
}
