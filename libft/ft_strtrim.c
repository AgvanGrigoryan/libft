/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:01:35 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/11 21:19:57 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_in_set(char const *set, char chr)
{
	if (set == NULL)
		return (0);
	while (*set && *set != chr)
		set++;
	if (*set != '\0')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		str_l;
	int		str_r;
	int		i;
	char	*trimmed_str;

	if (!s1)
		return (NULL);
	str_l = 0;
	str_r = ft_strlen(s1) - 1;
	while (str_l <= str_r && is_in_set(set, s1[str_l]))
		str_l++;
	if (str_l < str_r)
		while (is_in_set(set, s1[str_r]))
			str_r--;
	trimmed_str = (char *)malloc(str_r - str_l + 2);
	if (trimmed_str == NULL)
		return (NULL);
	i = 0;
	while (str_l <= str_r)
		trimmed_str[i++] = s1[str_l++];
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
