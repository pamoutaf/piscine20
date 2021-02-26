/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:12:00 by pamoutaf          #+#    #+#             */
/*   Updated: 2021/02/18 13:07:15 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int x;
	int j;
	int sign;
	int num;

	x = 0;
	j = 0;
	num = 0;
	if (*str == '\0')
		return (0);
	while (str[x] != '\0' && (str[x] == ' ' || str[x] == '+' || str[x] == '-'))
	{
		if (str[x] == '-')
			j++;
		x++;
	}
	sign = (j % 2 == 0) ? 1 : -1;
	while (str[x] >= '0' && str[x] <= '9')
	{
		num = num * 10 + (str[x] - 48);
		x++;
	}
	return (num * sign);
	return (0);
}
