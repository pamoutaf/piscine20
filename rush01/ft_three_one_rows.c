/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_one_rows.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:46:56 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 22:11:42 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_three_one_rows_a(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 3 && tab[5][y] == 1)
		{
			if (tab[3][y] == 3)
			{
				if (tab[1][y] == 0)
					tab[1][y] = 2;
				if (tab[2][y] == 0)
					tab[2][y] = 1;
			}
		}
	}
}

void	ft_three_one_rows_b(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 3 && tab[5][y] == 1)
		{
			if (tab[1][y] == 2 && tab[2][y] == 1 && tab[3][y] == 0)
				tab[3][y] = 3;
			else if (tab[1][y] == 2 && tab[3][y] == 3 && tab[2][y] == 0)
				tab[2][y] = 1;
			else if (tab[1][y] == 2 && tab[2][y] == 3 && tab[3][y] == 0)
				tab[3][y] = 1;
			else if (tab[1][y] == 2 && tab[3][y] == 1 && tab[2][y] == 0)
				tab[2][y] = 3;
			else if (tab[3][y] == 2)
			{
				if (tab[1][y] == 0)
					tab[1][y] = 1;
				if (tab[2][y] == 0)
					tab[2][y] = 3;
			}
		}
	}
}

void	ft_three_one_rows_c(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 3 && tab[5][y] == 1)
		{
			if (tab[3][y] == 3)
			{
				if (tab[1][y] == 0)
					tab[1][y] = 2;
				if (tab[2][y] == 0)
					tab[2][y] = 1;
			}
			if (tab[3][y] == 1)
			{
				if (tab[1][y] == 0)
					tab[1][y] = 2;
				if (tab[2][y] == 0)
					tab[2][y] = 3;
			}
		}
	}
}

void	ft_three_one_rows_d(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 3 && tab[5][y] == 1)
		{
			if (tab[1][y] == 1)
			{
				if (tab[2][y] == 0)
					tab[2][y] = 3;
				if (tab[3][y] == 0)
					tab[3][y] = 2;
			}
			if (tab[2][y] == 3 && tab[3][y] == 2 && tab[1][y] == 0)
				tab[1][y] = 1;
			if (tab[2][y] == 3 && tab[3][y] == 1 && tab[1][y] == 0)
				tab[1][y] = 2;
		}
	}
}
