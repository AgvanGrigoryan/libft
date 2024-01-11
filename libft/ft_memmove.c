/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:02:36 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/11 15:02:48 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_p;
	unsigned char	*src_p;

	dest_p = (unsigned char *)dest;
	src_p = (unsigned char *)src;
	if (src >= dest)
		while (n--)
			*dest_p++ = *src_p++;
	else
		while (n--)
			dest_p[n] = src_p[n];
	return (dest);
}
