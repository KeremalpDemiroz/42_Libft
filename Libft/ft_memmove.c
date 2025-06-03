/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:40:39 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/03 16:47:25 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
//memmove man'ın da hata olabilir tekrardan farklı kaynakları incele 
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	unsigned char	*temp;
	size_t			i;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = ptr_src[i];
		i++;
	}
	printf("tmp: %s\n", temp);
	printf("src: %s\n", ptr_src);
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = temp[i];
		i++;
	}
	printf("temp : %s\n", temp);
	ft_bzero(temp, n);
	printf("temp after: %s\n", temp);
	return (dest);
}

int main()
{
	char src[] = "Merhaba";
	char dest[10] ;
	
	ft_memmove(dest, src, 5);
	printf("%s\n", dest);
	return 0;
}
