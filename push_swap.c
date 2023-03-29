/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:56:56 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/28 14:52:27 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	t_dblist	*pilea;
	t_dblist	*pileb;

	if (argc <= 1)
		return (write(1, "Error\n", 6));
	if (ft_check_args_3(argv) != 0)
		return (write(1, "Error\n", 6));
	if (ft_check_args(argv) != 0)
		return (write(1, "Error\n", 6));
	if (ft_check_args_2(argc, argv) != 0)
		return (write(1, "Error\n", 6));
	//if (ft_check_args_4(argv) != 0)
	//	return (write(1, "Error\n", 6));
	i = 1;
	pilea = dlist_new();
	pileb = dlist_new();
	while (argv[i])
	{
	pilea = ft_add_bot(pilea, ft_atoi(argv[i]));
	i++;
	}
	if (argc == 3)
		ft_two(pilea);
	if (argc == 4)
		ft_tree(pilea);
	if (argc == 5 || argc == 6)
		ft_five(pilea, pileb);
	ft_print_pile(pilea);
	printf("\n pilea \n\n\n");
	ft_print_pile(pileb);
	printf("\n pileb \n\n\n");
	//ft_moove(pilea, pileb);
	//ft_moove_2(pilea, pileb);
	ft_hundred(pilea, pileb);
	//instru
	printf("\n===========after algo==========\n\n");
	ft_print_pile(pilea);
	printf("\n pilea\n\n\n");
	ft_print_pile(pileb);
	printf("\n pileb\n\n\n");
	
	return (0);
}
