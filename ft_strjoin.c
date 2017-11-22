/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:51:56 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/22 12:25:45 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*p1;
	char	*p2;
	char	*p3;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	p1 = (char*)s1;
	p2 = (char*)s2;
	if (!(p3 = ft_strnew(ft_strlen(p1) + ft_strlen(p2) + 1)))
		return (NULL);
	p3 = ft_strcat(p3, p1);
	p3 = ft_strcat(p3, p2);
	return (p3);
}
