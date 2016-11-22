/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 11:23:14 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 17:27:50 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to check if the character passed is a digit and return a non-zero
 * if it is or zero if its not*/
int		ft_isdigit(int a)
{
	int	c;

	c = (unsigned char) a;
	if (c >= 48 && c <= 57)
		return (c);
	else
		return (0);
}
