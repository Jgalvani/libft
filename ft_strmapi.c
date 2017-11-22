/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:16:45 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/22 13:30:10 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;

	if (!s || !f)
		return (0);
	p = (char*)s;
	if ((p = ft_strnew(ft_strlen(p))))
	{
		i = 0;
		while (s[i])
		{
			p[i] = f(i, s[i]);
			i++;
		}
		return (p);
	}
	return (0);
}
