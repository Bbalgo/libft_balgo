/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 01:32:46 by dsudadec          #+#    #+#             */
/*   Updated: 2023/03/13 22:19:40 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	flen(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s != c && *s)
				s++;
			s--;
		}
		s++;
	}
	return (i);
}

static int	setlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	dlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c && s[i])
		i++;
	return (i);
}

static char	*setstr(char *dest, char const *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		len;
	int		slen;

	slen = ft_strlen(s);
	arr = malloc(sizeof(char *) * (flen(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = dlen(&s[0], c);
	while (s[j] && j <= slen)
	{
		len = setlen(&s[j], c);
		arr[i] = malloc(sizeof(char) * len + 1);
		if (!arr[i])
			return (NULL);
		*arr[i] = 0;
		arr[i] = setstr(arr[i], &s[j], len);
		i++;
		j += len + dlen(&s[j + len], c);
	}
	arr[i] = NULL;
	return (arr);
}
