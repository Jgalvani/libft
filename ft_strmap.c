/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:08:37 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/22 13:28:27 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*p;
	int		i;

	if (!s || !f)
		return (0);
	p = (char*)s;
	if ((p = ft_strnew(ft_strlen(p))))
	{
		i = 0;
		while (s[i])
		{
			p[i] = f(s[i]);
			i++;
		}
		return (p);
	}
	return (0);
}
