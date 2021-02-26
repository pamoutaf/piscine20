/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:48:00 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/22 12:33:17 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int tab[6][6];

	if (argc != 2)
	{
		ft_putstr_error();
		return (0);
	}
	else if (ft_check_input(argv[1])) //check les param si ils repondent au condition du initialize
	{
		ft_reset_tab(tab); //met des zeros partout
		ft_save_params_rows(tab, argv[1]); //enregistre les param autour du tableau
		ft_save_params_cols(tab, argv[1]); //enregistre les param autour du tableau
		ft_initial_fill_rows(tab); // mettre les 1234 et les 4
		ft_initial_fill_cols(tab); // mettre les 1234 et les 4
		ft_fill_single_four(tab); 
		ft_fill_three_rows(tab); // 1332 
		ft_fill_three_cols(tab); // 1332
		ft_swap_two_rows(tab); // 1322 transforme le 2 en 3 pour les 1332 sur les cotes
		ft_swap_two_cols(tab); //1322 transforme le 2 en 3 pour les 1332 sur les cotes
		ft_master_fill(tab); // toute les formules 
		ft_check_table(tab);
	}
	return (0);
}
