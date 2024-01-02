/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barpent <barpent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:43:24 by bcarpent          #+#    #+#             */
/*   Updated: 2023/11/23 18:28:48 by bcarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	char	*str;
	size_t	begining;
	size_t	end;

	begining = 0;
	end = ft_strlen(s);
	while (s[begining] && is_charset(s[begining], set))
		begining++;
	while (end > begining && is_charset(s[end - 1], set))
		end--;
	(str = malloc(sizeof(*s) * (end - begining + 1)));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)(&s[begining]), (end - begining + 1));
	return (str);
}
