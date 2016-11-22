/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 11:43:52 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 17:41:15 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to check if the character is a printable character or, 
 * space included, returns a non-zero number if it is or zero if its not*/
int		ft_isprint(int c)
{
	int	a;

	a = (unsigned char) c;
	if (a >= 32 && a <= 126)
		return (a);
	else
		return (0);
}
