/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:36:31 by pamoutaf          #+#    #+#             */
/*   Updated: 2021/02/08 18:34:08 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_negative(int nbr)
{
		nbr = -nbr;
		ft_putchar('-');
		ft_putchar(nbr + '0');
		nbr = -nbr;
}
void	ft_putnbr(int nb)	
{	
	char nbr = nb;
	
	if (nbr < -9)
	{	
		nbr = -nbr;
		ft_putchar('-');
		ft_putchar(nbr / 10 + '0');
		ft_putchar(nbr % 10 + '0');
		nbr = -nbr;
	}
	else if (nbr < 0)
	{	
		ft_putchar_negative(nbr);
	}
	if (nbr >= 10)
	{
		ft_putchar(nbr / 10 + '0');
		ft_putchar(nbr % 10 + '0');	
	}
	else if (nbr >= 0)
	{
		ft_putchar(nbr + '0');
	}
}
int main ()
{
	ft_putnbr(-9);
	return 0;
}