/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 10:07:43 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 21:55:35 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*lexigraphical comparison of n bytes of string s1 and string s2
 * returning 1 if identical or 0 if not*/
int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (strncmp(s1, s2, n) != 0)
		return (0);
	else
		return (1);
}
