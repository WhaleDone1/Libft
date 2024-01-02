/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:07:50 by bcarpent          #+#    #+#             */
/*   Updated: 2023/11/17 21:12:58 by bcarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointeur, int value, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)pointeur;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)value;
		i++;
	}
	return (pointeur);
}
