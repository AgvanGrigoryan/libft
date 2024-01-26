/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:25:33 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/11 15:02:12 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_ptr;
	const unsigned char	*s2_ptr;

	s1_ptr = (unsigned char *) s1;
	s2_ptr = (unsigned char *) s2;
	while (n > 0 && *s1_ptr == *s2_ptr)
	{
		s1_ptr++;
		s2_ptr++;
		n--;
	}
	if (n > 0)
		return (*s1_ptr - *s2_ptr);
	return (0);
}
