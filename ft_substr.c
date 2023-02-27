/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 01:09:09 by dsudadec          #+#    #+#             */
/*   Updated: 2023/02/28 00:43:24 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	size_t	j;
	char	*str;

	if (start > ft_strlen(s))
		s_len = 0;
	else if ((ft_strlen(s) - start) >= len)
		s_len = len;
	else
		s_len = (ft_strlen(s) - start);
	str = (char *)malloc(sizeof(*s) * (s_len + 1));
	if (!str)
		return (0);
	i = start;
	j = 0;
	while (j < s_len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
