/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:54:59 by bcarpent          #+#    #+#             */
/*   Updated: 2023/11/23 18:17:38 by bcarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	tempc;

	i = 0;
	tempc = (char)c;
	while (s[i])
	{
		if (s[i] == tempc)
			return ((char *)&s[i]);
		i++;
	}
	if (tempc == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
