/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_char_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 15:02:52 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/09 20:07:27 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_char_tab(char **tab)
{
	t_u8	i;

	i = 0;
	while (tab[i] && i < 255)
	{
		ft_strclr(tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	tab = NULL;
}
