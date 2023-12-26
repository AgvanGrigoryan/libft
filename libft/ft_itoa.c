/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:56:39 by aggrigor          #+#    #+#             */
/*   Updated: 2023/12/24 20:35:46 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	count_num_len(long long int k)
{
	size_t		num_len;

	num_len = 0;
	if (k == 0)
		num_len++;
	else if (k < 0)
	{
		num_len++;
		k *= -1;
	}
	while (k != 0)
	{
		num_len++;
		k /= 10;
	}
	return (num_len);
}

void	int_to_str(long long int k, size_t num_len, char *str_num)
{
	size_t			i;

	if (k == 0)
		str_num[0] = '0';
	else if (k < 0)
	{
		str_num[0] = '-';
		k *= -1;
	}
	i = 1;
	while (k != 0)
	{
		str_num[num_len - i] = '0' + (k % 10);
		k /= 10;
		i++;
	}
	str_num[num_len] = '\0';
}

char	*ft_itoa(int n)
{
	char			*str_num;
	size_t			num_len;

	num_len = count_num_len((long long int) n);
	str_num = (char *)malloc((num_len + 1) * sizeof(char));
	if (str_num == NULL)
		return (NULL);
	int_to_str((long long int) n, num_len, str_num);
	return (str_num);
}
