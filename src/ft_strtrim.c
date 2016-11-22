/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 07:55:34 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 22:51:35 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to removes whitespaces at the beginning and the end of a string
 *returns a copy of str trimmed, with whitespaces being '\n', ' ' and '\t'*/
char		*ft_strtrim(char const *str)
{
	int	loop;
	int	loop2;
	char	*t_str;
	size_t	len;

	loop = 0;
	loop2 = 0;
	len = ft_strlen(str);
	t_str = (char *)malloc(sizeof(char) * len);
	if (t_str == NULL)
		return (NULL);
	else
	{
		while (str[loop] == 32 || str[loop] == 10 || str[loop] == 9)
			loop++;
		while (str[loop] != '\0')
			t_str[loop2++] = str[loop++];
		t_str[loop2] = '\0';
		len = ft_strlen(t_str) - 1;
		while (t_str[len] == 32 || t_str[len] == 9 || t_str[len] == 10)
			len--;
		t_str[len + 1] = '\0';
		return (t_str);
	}
}
