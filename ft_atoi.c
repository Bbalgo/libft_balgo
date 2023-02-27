/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:56:28 by dsudadec          #+#    #+#             */
/*   Updated: 2023/02/24 01:02:42 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_atoi(const char *s)
{
	int	sign;
	int	number;

	number = 0;
	if (*s == '\0' || *s == '\e')
		return (0);
	while (*s <= 32)
		s++;
	if (*s == '-')
		sign = -1;
	else
		sign = 1;
	if (*s == '-' || *s == '+')
		s++;
	while (ft_isdigit(*s))
		number = (number * 10) + (*s++ - '0');
	return (sign * number);
}
