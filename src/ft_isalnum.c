/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 11:31:03 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 17:40:45 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to check if the character is alphanumeric or not, returns a non-zero
 * if it is or zero if its not*/
int		ft_isalnum(int a)
{
	int	c;

	c = (unsigned char) a;
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		return (c);
	else
		return (0);
}
