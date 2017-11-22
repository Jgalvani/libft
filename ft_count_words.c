/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:56:26 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/22 12:35:25 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_count_words(char *str)
{
	int i;
	int j;

	if (str == 0)
		return (0);
	i = 0;
	j = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '\0')
		return (0);
	if (!ft_iswhitespace(str, i))
		j++;
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0')
		i++;
	return (j + ft_count_words(str + i));
}
