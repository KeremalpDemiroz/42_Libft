/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 14:55:09 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/02 15:21:33 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main(void)
{
	int	str[] = {1,2,3,4};
	int	i;

	i = 0;
	while(i < 4)
	{
		printf("%d,", str[i]);
		i++;
	}
	printf("\n");
	ft_bzero(str, 12);
	i = 0;
	while(i< 3)
	{
		printf("%d", str[i]);
		i++;
	}
	printf("\n%d", str[3]);
	return (0);
}
*/