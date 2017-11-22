/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcharlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:37:46 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/15 16:42:08 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstcharlen(t_list *lst)
{
	size_t	i;
	t_list	*begin;

	i = 0;
	begin = lst;
	while (lst)
	{
		i += ft_strlen(lst->content) + 1;
		lst = lst->next;
	}
	lst = begin;
	return (i);
}
