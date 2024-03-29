/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:38:35 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/11 15:01:54 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_ptr;

	s_ptr = (unsigned char *)s;
	while (n > 0 && *s_ptr != (unsigned char)c)
	{
		n--;
		s_ptr++;
	}
	if (n > 0)
		return ((void *)s_ptr);
	return (NULL);
}
