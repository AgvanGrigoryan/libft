/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:08:18 by aggrigor          #+#    #+#             */
/*   Updated: 2023/12/26 12:46:29 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include <limits.h>

void	my_toupper(unsigned int i, char * chr)
{
	if ('a' <= *chr && *chr <= 'z')
		*chr -= 32;
	else if ('0' <= *chr && *chr <= '9')
		*chr = '7';
}

int main(int argc, char *argv[]) 
{
	write(0, "a", 1);
	write(1, "b", 1);
	write(2, "c", 1);
	char s[100];
	write(1, "\n", 1);
	scanf("%s", s);
	printf("%s\n",s);
	/*if (argc != 2)
		return (0);

	ft_putchar_fd(argv[1][0], 0);*/
   	/*if (newstr != NULL) 
	{
		printf("STRMAPI:%s\n", newstr);
		free(newstr);
	}
	else
		printf("Ошибка выделения памяти\n");
	*/
	return 0;
}
