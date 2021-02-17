/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:25:19 by pamoutaf          #+#    #+#             */
/*   Updated: 2021/02/17 12:46:25 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int div;
	int res;
	int len;

	len = ft_strlen(base);
	div = 1;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	while (nbr / div >= len)
		div = div * len;
	while (div > 0)
	{
		res = (nbr / div) % len;
		ft_putchar(base[res]);
		div = div / len;
	}
}
