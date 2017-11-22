/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_new_path.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 14:35:56 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/15 18:56:18 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_new_path(char *loc, char *name)
{
	char	*new_path;
	size_t	len;

	len = ft_strlen(loc);
	new_path = ft_strnew(len + ft_strlen(name) + 1);
	new_path = ft_strcat(new_path, loc);
	if (loc[len - 1] != '/')
		new_path[len] = '/';
	if (*name == '/')
		new_path = ft_strcat(new_path, name + 1);
	else
		new_path = ft_strcat(new_path, name);
	return (new_path);
}
