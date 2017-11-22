/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:56:22 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/22 13:14:00 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int i;
	int size;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	if (!(tab = (int*)malloc(sizeof(int) * size)))
		return (NULL);
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
