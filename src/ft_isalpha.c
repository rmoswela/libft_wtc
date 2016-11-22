/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 11:10:18 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 17:28:27 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to check where the character passed is an alphabet and return
 * a non zero if it is or a zero if its not*/
int		ft_isalpha(int a)
{
	int 	c;

	c = (unsigned char) a;
	if (c >= 65 && c <= 90)
		return (c);
	else if (c >= 97 && c <= 122)
		return (c);
	else
		return (0);
}
