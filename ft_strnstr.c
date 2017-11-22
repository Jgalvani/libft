/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:57:48 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/22 13:47:13 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(char const *big, char const *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!n)
		return (NULL);
	if (*little == '\0')
		return ((char*)big);
	while (big[i])
	{
		while (big[i + j] == little[j])
		{
			j++;
			if ((i + j) > n)
				return (0);
			if (little[j] == '\0')
				return ((char*)big + i);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
