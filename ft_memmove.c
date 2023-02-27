/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 00:39:01 by dsudadec          #+#    #+#             */
/*   Updated: 2023/02/23 00:43:23 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*d;
	char	*s;

	i = -1;
	d = (char *)dst;
	s = (char *)src;
	if (dst < src)
	{
		while (++i < (int)len)
			*(d++) = *(s++);
	}
	else
	{
		d += len -1;
		s += len -1;
		while (++i < (int)len)
			*(d--) = *(s--);
	}
	return (dst);
}
