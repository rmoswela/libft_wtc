/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 11:38:20 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 17:40:13 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to check if the character is found in the ascii character table
 * and returns a non-zero number if it or zero if its not*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (c);
	else
		return (0);
}
