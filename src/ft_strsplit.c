/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 11:14:46 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/22 23:39:16 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*function to split string str using char c as delimiter and returns
 * fresh tokens of that string or NULL if memory allocation failed*/
int		ft_length(char const *str, char c)
{
	size_t	len;
	size_t	count;

	len = 0;
	count = 0;
	while (str[count] && str[count] == c)
		count++;
	while (str[count] != '\0')
	{
		while (str[count] == c && str[count] != '\0')
			count++;
		while (str[count] != c && str[count] != '\0')
		{
			count++;
			len++;
		}
	}
	return (len);
}

char		**ft_strsplit(char const *str, char c)
{
	char	**split;
	size_t	loop;
	size_t	start;
	size_t	loop2;

	loop = 0;
	loop2 = 0;
	split = (char **)malloc(sizeof(char *) * ft_length(str, c)) + 1;
	if (split == NULL)
		return (NULL);
	while (str[loop])
	{
		if (str[loop] == c && str[loop] != '\0')
			loop++;
		else
		{
			start = loop;
			while (str[loop] != c && str[loop] != '\0')
				loop++;
			split[loop2++] = ft_strsub(str, start, loop - start);
			split[loop2] = '\0';
		}
	}
	return (split);
}
