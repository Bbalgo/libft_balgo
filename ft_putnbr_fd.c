/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:02:25 by dsudadec          #+#    #+#             */
/*   Updated: 2023/02/26 19:45:29 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	write_func(int n, int fd)
{
	char	c;

	if (n == 0)
		return (0);
	else
	{
		write_func(n / 10, fd);
		c = (n % 10) + '0';
		ft_putchar_fd(c, fd);
	}
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 0)
		ft_putchar_fd('0', fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		write_func(n * -1, fd);
	}
	else
		write_func(n, fd);
}
