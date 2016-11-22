/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 09:38:19 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 21:43:50 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*lexigraphical comaparison of s1 and string s2, returning 1 if equal or
 * or 0 if not*/
int	ft_strequ(char const *s1, char const *s2)
{
	if (ft_strcmp(s1, s2) != 0)
		return (0);
	else
		return (1);
}
