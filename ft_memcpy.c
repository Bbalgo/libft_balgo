/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 00:36:53 by dsudadec          #+#    #+#             */
/*   Updated: 2023/02/27 23:14:30 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*memdst;
	char			*memsrc;

	i = 0;
	memdst = (char *) dst;
	memsrc = (char *) src;
	while (i < n)
	{
		*memdst++ = *memsrc++;
		i++;
	}
	return (dst);
}
