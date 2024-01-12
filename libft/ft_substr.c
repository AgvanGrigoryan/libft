/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:05:11 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/11 19:58:17 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	ft_min(unsigned int num1, unsigned int num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	s_len;
	unsigned int	substr_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		substr_len = 0;
	else
		substr_len = ft_min(s_len, len);
	substr = (char *)malloc(substr_len + 1);
	if (substr == NULL)
		return (NULL);
	s += start;
	substr[substr_len] = '\0';
	while (substr_len--)
		substr[substr_len] = s[substr_len];
	return (substr);
}
