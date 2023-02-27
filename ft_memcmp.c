/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:48:56 by dsudadec          #+#    #+#             */
/*   Updated: 2023/02/27 23:43:22 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;

	mem1 = (unsigned char *) s1;
	mem2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*mem1 != *mem2)
			return (*mem1 - *mem2);
		mem1++;
		mem2++;
		n--;
	}
	return (0);
}
