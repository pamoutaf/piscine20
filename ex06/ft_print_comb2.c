/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:34:30 by pamoutaf          #+#    #+#             */
/*   Updated: 2021/02/08 17:35:42 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a = -1;
	int b;
	
	while (a < 98)
	{
		a++;
		b = a;
		while (b < 99)
		{
			b++;
			ft_putchar('0' + (a / 10));
			ft_putchar('0' + (a % 10));
			ft_putchar(' ');
			ft_putchar('0' + (b / 10));
			ft_putchar('0' + (b % 10));
			if (a < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	
	}
}
int main()
{
	ft_print_comb2();
	return 0;
}