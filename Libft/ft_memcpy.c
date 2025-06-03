/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:15:24 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/01 20:06:04 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
	/*
	printf("src : %p\n", src);
	printf("dest : %p\n", dest);
	printf("ptr_src : %p\n", ptr_src);
	printf("ptr_dest : %p\n", ptr_dest);
	*/
	/*
	printf("src : %p\n", src);
	printf("dest : %p\n", dest);
	printf("ptr_src : %p\n", ptr_src);
	printf("ptr_dest : %p\n", ptr_dest);
	*/
/*
int	main(void)
{
	const char src[0];
	// const int src1[] = {1, 2, 4, 5};
	char dst[0];
	ft_memcpy(dst, src, 0);
	int dest[50];
	//printf("src : %p\n",src);
	//printf("dst: %p\n", dst);
	int n = 16;
	ft_memcpy(dest, src1, n);
	int i ;
	while (i < n/4)
	{
		printf("%d ", dest[i]);
		i ++;
	}
	printf("\n");
	//printf("src: %p\n",src);
	printf("dst: %p\n", dst);
	printf("%s", dst);
}
*/