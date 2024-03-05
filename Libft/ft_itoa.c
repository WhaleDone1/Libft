/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:56:38 by bcarpent          #+#    #+#             */
/*   Updated: 2023/11/23 18:21:25 by bcarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	abs_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	count_digits(int n)
{
	size_t	count;

	count = 0;
	n = abs_value(n);
	if (n == 0)
		return (1);
	while (n)
	{
		n *= 0.1;
		count++;
	}
	return (count);
}

static void	reverse_order(char *s)
{
	size_t	len;
	size_t	i;
	char	t;

	len = ft_strlen(s);
	i = 0;
	while (i < (len * 0.5))
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
		i++;
	}
}

char	*ft_itoa(int n)
{
	int		sign;
	size_t	i;
	char	*s;

	sign = (n < 0);
	i = 0;
	s = ft_calloc((count_digits(n) + 1 + sign), sizeof(*s));
	if (!s)
		return (NULL);
	if (n == 0)
		s[0] = '0';
	while (n != 0)
	{
		s[i++] = abs_value(n % 10) + '0';
		n *= 0.1;
	}
	if (sign)
		s[i] = '-';
	reverse_order(s);
	return (s);
}
