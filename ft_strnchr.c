/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 13:49:39 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/11 13:49:41 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(char const *s, char *str)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	p = (char*)s;
	if (*str == '\0')
	{
		while (p[i])
			i++;
		return (&p[i]);
	}
	while (p[i])
	{
		while (str[j])
		{
			if (p[i] == str[j])
				return (&p[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
