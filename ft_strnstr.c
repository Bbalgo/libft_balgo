/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:53:19 by dsudadec          #+#    #+#             */
/*   Updated: 2023/02/28 00:54:47 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t	s;
	size_t	sub;

	if (substr[0] == '\0')
		return ((char *) str);
	if (str[0] == '\0' || n == 0)
		return (NULL);
	s = 0;
	sub = 0;
	while (1)
	{
		if (substr[sub] == '\0')
			return ((char *)(str + s - sub));
		if (str[s] == substr[sub])
			sub++;
		else
		{
			s -= sub;
			sub = 0;
		}
		if (str[s] == '\0' || (s >= n && str[s] != '\0'))
			return (NULL);
		s++;
	}
}
