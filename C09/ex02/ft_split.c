/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:57:33 by pamoutaf          #+#    #+#             */
/*   Updated: 2021/02/25 21:34:32 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		count_str(char *str, char *charset)
{
	int i;

	i = 0;
	while (*str)
	{
		if (is_separator(*str, charset))
			str++;
		else
		{
			while (!is_separator(*str, charset) && *str)
				str++;
			i++;
		}
	}
	return (i);
}

int		ft_strlen(char *str, char *charset)
{
	int len;

	len = 0;
	while (*str && !is_separator(*str, charset))
	{
		len++;
		str++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**dest;
	char	*ptr;

	if (!(dest = malloc(sizeof(char*) * (count_str(str, charset) + 1))))
		return (0);
	j = 0;
	while (*str)
	{
		if (is_separator(*str, charset))
			str++;
		else
		{
			if (!(ptr = malloc(sizeof(char) * ft_strlen(str, charset) + 1)))
				return (0);
			i = 0;
			while (*str && !is_separator(*str, charset))
				ptr[i++] = *(str++);
			ptr[i] = '\0';
			dest[j++] = ptr;
		}
	}
	dest[j] = 0;
	return (dest);
}
