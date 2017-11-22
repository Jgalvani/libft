/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:38:44 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/22 13:40:30 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_str;

	if ((new_str = (char*)malloc(sizeof(char) * size + 1)))
	{
		ft_memset(new_str, '\0', size + 1);
		return (new_str);
	}
	return (NULL);
}
