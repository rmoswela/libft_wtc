/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 16:37:10 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 23:58:43 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to display string str to the standard output
 * and a new line*/
void	ft_putendl (char const *str)
{
	while (*str != '\0')
		write (1, str++, 1);
	write (1, "\n", 1);
}
