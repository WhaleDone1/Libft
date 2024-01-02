/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:49:10 by bcarpent          #+#    #+#             */
/*   Updated: 2023/11/17 21:16:22 by bcarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t dest_len)
{
	size_t	i;

	i = 0;
	while (src[i] && i + 1 < dest_len)
	{
		dest[i] = src[i];
		i++;
	}
	if (dest_len > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
