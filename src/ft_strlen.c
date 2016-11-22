/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:15:37 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 11:19:00 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to compute the length of string str*/
int			ft_strlen(const char *str)
{
	size_t	loop;

	loop = 0;
	while (str[loop] != '\0')
		loop++;
	return(loop);
}
