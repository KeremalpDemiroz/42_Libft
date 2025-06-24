/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 19:40:49 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/24 20:30:27 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		c = (n + '0');
		write(fd, &c, 1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		c = (n % 10 + '0');
		write(fd, &c, 1);
	}
}
int main()
{
		/*Merhaba dunya bu bir test kahve ariyoruz bu strin space gore 
		formatlayip dosya içine tek satır olarak yazdırılacak*/
		/*
		Merhaba dunya bu bir test kahve ariyoruz harfler buyultulup
		dosya icine alt alta yazdırılacak */
		/*
		cikti:
			MERHABA
			DUNYA
			BU
			...
		*/
		
}