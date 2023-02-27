/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 01:27:24 by dsudadec          #+#    #+#             */
/*   Updated: 2023/02/28 01:04:41 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	is_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;	
	size_t	end;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (is_set(s1[start], set) == 0)
		start++;
	if (start == end)
	{
		str = ft_strdup("");
		if (!str)
			return (NULL);
		else
			return (str);
	}
	while (is_set(s1[end -1], set) == 0)
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}
