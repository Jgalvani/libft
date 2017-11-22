/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdelim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:41:59 by jgalvani          #+#    #+#             */
/*   Updated: 2017/11/22 12:43:17 by jgalvani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_countdelim(char const *s, char c)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i] == c)
		i++;
	if (s[i] != c && s[i] != '\0')
		j++;
	if (!s[i])
		return (0);
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == c)
		return (j += ft_countdelim(s + i, c));
	return (j);
}
