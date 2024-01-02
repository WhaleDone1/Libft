/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:24:33 by bcarpent          #+#    #+#             */
/*   Updated: 2023/11/23 18:24:50 by bcarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_tab(char *str, char *t1, char *t2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (t1[i])
	{
		str[i] = t1[i];
		i++;
	}
	while (t2[j])
	{
		str[i] = t2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t1;
	char	*t2;
	char	*str;

	t1 = (char *)s1;
	t2 = (char *)s2;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	fill_tab(str, t1, t2);
	return (str);
}
