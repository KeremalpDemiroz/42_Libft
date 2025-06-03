/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:35:56 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/03 16:44:38 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
 int s[3] = {1, 2, 4};
	int	i;

 i = 0;
 while (i < 3)
 {
		printf("%d", s[i]);
		i++;
 }
 printf("\n");
 ft_memset(s + 1, 255, 4);
 ft_memset(s + 1, 254, 1);
 i = 0;
 while (i < 3)
 {
		printf("%d,", s[i]);
		i++;
 }
}
*/