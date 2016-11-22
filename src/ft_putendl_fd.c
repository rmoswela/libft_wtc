/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 16:59:42 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/23 00:05:04 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function write string str to file discriptor fd and followed by new line*/
void	ft_putendl_fd (char const *str, int fd)
{
	while (*str != '\0')
		ft_putchar_fd (*str++, fd);
	ft_putchar ('\n');
}
