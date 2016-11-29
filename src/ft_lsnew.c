/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 09:24:22 by rmoswela          #+#    #+#             */
/*   Updated: 2016/11/26 11:08:03 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*function to initialize link's contents with parameters passed, 
 * if param content is nul,link's contents are all NULL
 * returns NULL if memory alloc fails, or new link*/
t_list			*ft_lsnew (void const *content, size_t content_size)
{
	t_list		*temp;

	temp = ft_memalloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	else
	{
		if (content == NULL)
		{
			temp->content = NULL;
			temp->content_size = 0;
			temp->next = NULL;
		}
		else
		{
			temp->content = content;
			temp->content_size = content_size;
			temp->next = NULL;
		}
		return (temp);
	}
}
