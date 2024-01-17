/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:35:51 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/17 17:09:51 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*cmp_ptr;

	cmp_ptr = NULL;
	if ((char)c > 127)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == (char)c)
			cmp_ptr = s;
		s++;
	}
	if (*s == c)
		cmp_ptr = s;
	return ((char *)cmp_ptr);
}
