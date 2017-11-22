/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 19:11:59 by jgalvani          #+#    #+#             */
/*   Updated: 2017/02/13 14:22:10 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_countonbr(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n > 0)
	{
		n /= 8;
		i++;
	}
	return (i);
}