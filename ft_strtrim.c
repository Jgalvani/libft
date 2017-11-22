/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:56:06 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/22 14:08:17 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		first_char(char *p1, int i)
{
	while (p1[i] == ',' || p1[i] == ' ' || p1[i] == '\n' || p1[i] == '\t')
	{
		i++;
		if (p1[i] == '\0')
			return (0);
	}
	return (i);
}

static	int		last_char(char *p1, int i)
{
	i = ft_strlen(p1) - 1;
	while (p1[i] == ',' || p1[i] == ' ' || p1[i] == '\n' || p1[i] == '\t')
		i--;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	char	*p1;
	char	*p2;
	int		i;
	int		begin;
	int		end;

	i = 0;
	if (!s)
		return (0);
	p1 = (char*)s;
	begin = first_char(p1, i);
	end = last_char(p1, i);
	if ((p2 = ft_strnew(end - begin)))
	{
		while (begin <= end)
		{
			p2[i] = p1[begin];
			i++;
			begin++;
		}
		p2[i] = '\0';
		return (p2);
	}
	return (NULL);
}
