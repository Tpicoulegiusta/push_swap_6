/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_nbr_100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 02:28:45 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/28 16:59:39 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dblist	*ft_hundred(t_dblist *pilea, t_dblist *pileb)
{
	if (ft_chunks(pilea) < 0 && ft_chunks_2(pilea) < 0 && pilea->length != 0)
		write(1, "caca1\n", 6);
	if ((ft_chunks(pilea) != -1 && ft_chunks_2(pilea) == -1)
		|| (ft_chunks(pilea) <= ft_chunks_2(pilea) && ft_chunks(pilea) != -1))
	{
		write(1, "caca2\n", 6);
		ft_moove(pilea, pileb);
	}
	else if ((ft_chunks(pilea) == -1 && ft_chunks_2(pilea) != -1)
		|| (ft_chunks(pilea) >= ft_chunks_2(pilea) && ft_chunks_2(pilea) != -1))
	{
		write(1, "caca3\n", 6);
		ft_moove_2(pilea, pileb);
	}
	return (pilea);
}

int	ft_chunks(t_dblist *pilea)
{
	int		i;
	int		j;
	int		tmp;
	t_node	*node;

	i = 0;
	j = pilea->length;
	node = pilea->top;
	tmp = pilea->top->value;
	while (i <= pilea->length)
	{
		if (tmp <= j / 5)
		{
			return (i);
		}
		tmp = node->next->value;
		i++;
	}
	return (-1);
}

int	ft_chunks_2(t_dblist *pilea)
{
	int		i;
	int		j;
	int		tmp;
	t_node	*node;

	i = 0;
	j = pilea->length;
	node = pilea->bot;
	tmp = pilea->bot->value;
	printf ("length ==== %d\n", j);
	while (i <= pilea->length)
	{
		if (tmp <= j / 5)
			return (i);
		tmp = node->prev->value;
		i++;
	}
	return (-1);
}

void	ft_moove(t_dblist *pilea, t_dblist *pileb)
{
	int	i;

	i = ft_chunks(pilea);
	printf ("i ===> %d", i);
	while (i > 0)
	{
		ft_ra(pilea);
		i--;
	}
	if (i != -1)
		ft_pb(pilea, pileb);
	if (i == -1)
		return ;
}

void	ft_moove_2(t_dblist *pilea, t_dblist *pileb)
{
	int	i;
	int	j;

	j = 0;
	i = ft_chunks_2(pilea);
	while (i >= 0)
	{
		ft_rra(pilea);
		i--;
		j++;
	}
	if (i != -1)
		ft_pb(pilea, pileb);
	if (j > 0)
		ft_pb(pilea, pileb);
	if (i == -1)
		return ;
}
