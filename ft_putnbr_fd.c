/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:13:21 by bcarpent          #+#    #+#             */
/*   Updated: 2023/11/17 21:13:23 by bcarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int		temp;

	temp = n;
	if (temp < 0)
	{
		ft_putchar_fd('-', fd);
		temp *= -1;
	}
	if (temp > 9)
	{
		ft_putnbr_fd(temp / 10, fd);
		ft_putchar_fd((temp % 10) + '0', fd);
	}
	else
		ft_putchar_fd(temp + '0', fd);
}
