/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:27:17 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/11 15:00:36 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*mem;
	size_t			total_size;

	total_size = nmemb * size;
	if (total_size / size != nmemb)
		return (NULL);
	mem = (unsigned char *)malloc(total_size);
	if (mem != NULL)
	{
		while (total_size--)
			mem[total_size] = 0;
	}
	return (mem);
}
