/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 00:44:35 by dsudadec          #+#    #+#             */
/*   Updated: 2023/02/28 03:52:59 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static void	copy(char *d, const char *s, size_t n)
{
	while (n-- > 0)
		*d++ = *s++;
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	if (srclen < size)
		copy(dest, src, srclen + 1);
	else
	{
		copy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (srclen);
}
