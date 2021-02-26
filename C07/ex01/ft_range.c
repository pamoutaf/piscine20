/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 08:24:36 by pamoutaf          #+#    #+#             */
/*   Updated: 2021/02/24 11:21:24 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *array;

	i = 0;
	if (min >= max)
		return (0);
	if (!(array = malloc(sizeof(int) * (max - min))))
		return (0);
	while ((min + i) < max)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
