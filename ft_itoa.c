/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 13:16:52 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/22 13:06:09 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char				*ft_zero(char *str)
{
	if (!(str = ft_strnew(2)))
		return (0);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static unsigned int		ft_num(unsigned int num, int n)
{
	if (n < 0 && n != -2147483648)
		num = -n;
	else if (n > 0)
		num = n;
	else if (n == -2147483648)
		num = 2147483648;
	return (num);
}

char					*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	int				i;

	num = 0;
	str = 0;
	i = ft_countnumbers(n);
	if (n == 0)
		return (ft_zero(str));
	if (!(str = ft_strnew(i)))
		return (0);
	num = ft_num(num, n);
	while (num)
	{
		str[--i] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
