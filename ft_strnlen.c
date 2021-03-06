/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 16:38:26 by jgalvani          #+#    #+#             */
/*   Updated: 2017/09/25 16:09:30 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(char const *str, int c, t_u8 n)
{
	int	i;

	i = 0;
	while (str[i] && n)
	{
		if (str[i] == c)
			n--;
		i++;
	}
	return (i);
}
