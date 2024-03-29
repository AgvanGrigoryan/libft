/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:12:50 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/17 19:05:39 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*compare_start;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			compare_start = big + i;
			while (i + j < len && big[i + j] != '\0'
				&& little[j] != '\0'
				&& big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *)compare_start);
			i += 1;
		}
		else
			i++;
	}
	return (NULL);
}
