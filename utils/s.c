/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 05:34:34 by rmonfort          #+#    #+#             */
/*   Updated: 2025/03/24 18:43:21 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sx(t_node *stack)
{
	int	temp;

	if (!stack || !stack->next)
		return;
	temp = stack->nbr;
	stack->nbr = stack->next->nbr;
	stack->next->nbr = temp;
}
void	sa(t_node *a)
{
	s(a);
	write(1, "sa\n", 3);
}

void	sb(t_node *b)
{
	s(b);
	write(1, "sb\n", 3);
}

void	ss(t_node *a, t_node *b)
{
	s(a);
	s(b);
	write(1, "ss\n", 3);
}
