/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:27:17 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/12 19:30:12 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if ((nmemb >= sizeof(size_t) && size != 0)
		|| (size >= sizeof(size_t) && nmemb != 0))
		return (NULL);
	mem = (void *)malloc(nmemb * size);
	ft_bzero(mem, nmemb * size);
	return (mem);
}
