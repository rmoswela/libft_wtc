/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 16:52:18 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/23 00:01:46 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to write string str to file discriptor fd*/
void	ft_putstr_fd (char const *str, int fd)
{
	while (*str != '\0')
		ft_putchar_fd(*str++, fd);
}
