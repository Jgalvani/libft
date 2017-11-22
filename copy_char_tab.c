/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_char_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 20:12:45 by jgalvani          #+#    #+#             */
/*   Updated: 2017/09/12 16:23:50 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**copy_char_tab(char **tab)
{
	char	**copy;
	size_t	i;

	i = ft_tablen(tab);
	if (!(copy = (char**)malloc(sizeof(char*) * (i + 1))))
		ft_error("Malloc failed");
	i = 0;
	while (tab[i])
	{
		copy[i] = ft_strdup(tab[i]);
		i++;
	}
	copy[i] = NULL;
	return (copy);
}
