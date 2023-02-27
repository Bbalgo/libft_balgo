/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:41:02 by dsudadec          #+#    #+#             */
/*   Updated: 2023/02/27 00:54:54 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	ft_count_int(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*write_number(char *str, long a, int b)
{
	str[b--] = '\0';
	if (a == 0)
		str[0] = '0';
	while (a > 0)
	{
		str[b--] = (a % 10) + '0';
		a /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		m;
	long	a;
	char	*str;

	a = (long) n;
	m = ft_count_int(n);
	if (n >= 0)
		str = malloc(sizeof(char) * m + 1);
	else
		str = malloc(sizeof(char) * ++m + 1);
	if (!str)
		return (NULL);
	str[0] = 0;
	if (n < 0)
	{
		str[0] = '-';
		a = a * -1;
	}
	str = write_number(str, a, m);
	return (str);
}
