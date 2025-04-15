/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 05:48:31 by rmonfort          #+#    #+#             */
/*   Updated: 2025/04/15 16:40:57 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	r(t_node **stack)
{
	t_node *first;

	if (!stack || !*stack || !(*stack)->next)
		return;
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	ft_lstadd_back(stack, first);
}

void	ra(t_node **a)
{
	r(a);
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	r(b);
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	r(a);
	r(b);
	write(1, "rr\n", 3);
}
