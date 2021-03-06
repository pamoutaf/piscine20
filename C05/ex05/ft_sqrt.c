/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:41:51 by pamoutaf          #+#    #+#             */
/*   Updated: 2021/02/19 09:51:04 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	if (nb == 1)
		return (1);
	x = (nb % 2 == 0) ? 0 : 1;
	while (x <= nb / 2)
	{
		if ((x * x) == nb)
			return (x);
		x += 2;
	}
	return (0);
}
