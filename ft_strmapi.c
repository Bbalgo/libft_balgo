/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:28:22 by dsudadec          #+#    #+#             */
/*   Updated: 2023/02/28 03:53:57 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*p;

	i = 0;
	p = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!p)
		return (NULL);
	while (*s)
	{
		p[i] = f(i, *s++);
		i++;
	}
	p[i] = '\0';
	return (p);
}
