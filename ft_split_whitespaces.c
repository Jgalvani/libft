/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 14:38:20 by jgalvani          #+#    #+#             */
/*   Updated: 2017/09/10 14:38:40 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		w;
	int		i;
	int		j;
	int		words;

	words = ft_count_words(str);
	array = (char **)malloc((words + 1) * sizeof(char*));
	w = 0;
	while (w < words)
	{
		i = 0;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		j = 0;
		while (str[i + j] != ' ' && str[i + j] != '\n'
			&& str[i + j] != '\t' && str[i + j] != '\0')
			j++;
		array[w] = (char *)malloc(sizeof(char) * (j + 1));
		*(ft_strncpy(array[w], str + i, j) + j) = '\0';
		str = str + i + j;
		w++;
	}
	array[words] = 0;
	return (array);
}
