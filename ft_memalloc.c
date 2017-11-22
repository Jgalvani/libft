/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:40:47 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/22 12:48:59 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memory_space;
	char	*p;

	if (size <= SSIZE_MAX - 1)
	{
		size += 1;
		memory_space = (void*)malloc(sizeof(size_t) * size);
		if (memory_space)
		{
			p = (char*)memory_space;
			while (size)
			{
				p[size - 1] = '\0';
				size--;
			}
			return (memory_space);
		}
	}
	return (NULL);
}
