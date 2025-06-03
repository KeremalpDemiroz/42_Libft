/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:56:50 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/01 15:15:25 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char str[] = "Hello";
	char str2[] = "World";
	int arr[] = {1, 2, 3, 4};
	printf("test değeri = 3\n");
	printf("ft_isalpha = %d\n", ft_isalpha('3'));
	printf("ft_isdigit = %d\n", ft_isdigit('3'));
	printf("ft_isalnum = %d\n", ft_isalnum('3'));
	printf("ft_isascii = %d\n", ft_isascii('3'));
	printf("ft_isprint = %d\n", ft_isprint('3'));
	printf("ft_strlen = %ld\n", ft_strlen("3"));
	printf("ft_memset = %d\n", str, arr[0], arr[1], arr[2]);
	/*
	printf("ft_is = %d\n", ft_isalpha('3'));
	printf("ft_is = %d\n", ft_isalpha('3'));
	printf("ft_is = %d\n", ft_isalpha('3'));
	printf("ft_is = %d\n", ft_isalpha('3'));
	printf("ft_is = %d\n", ft_isalpha('3'));
	printf("ft_is = %d\n", ft_isalpha('3'));
	printf("ft_is = %d\n", ft_isalpha('3'));
	printf("ft_is = %d\n", ft_isalpha('3'));
	printf("ft_is = %d\n", ft_isalpha('3'));
	printf("ft_is = %d\n", ft_isalpha('3'));
	*/
	return (0);
}
