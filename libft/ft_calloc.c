/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:27:17 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/16 21:45:44 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
# define UINT_MAX_SQRT 65536
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if ((nmemb > UINT_MAX_SQRT && size != 0)
		|| (size > UINT_MAX_SQRT && nmemb != 0))
		return (NULL);
	mem = (void *)malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, nmemb * size);
	return (mem);
}
