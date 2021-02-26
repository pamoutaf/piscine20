/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:31:16 by pamoutaf          #+#    #+#             */
/*   Updated: 2021/02/23 21:56:43 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*tab;

	i = 0;
	k = 0;
	if (!(tab = malloc(sizeof(strs))))
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			tab[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < (size - 1))
			tab[k++] = sep[j++];
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
