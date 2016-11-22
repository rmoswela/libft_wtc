/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 17:07:01 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/23 00:06:10 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to write integer nbr to file discriptor fd followed by new line*/
void	ft_putnbr_fd (int nbr, int fd)
{
	if (nbr < 0)
	{
		ft_putchar_fd ('-', fd);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd (nbr / 10, fd);
		ft_putnbr_fd (nbr % 10, fd);
	}
	else
		ft_putchar_fd (nbr + 48, fd);
}
