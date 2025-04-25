/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 06:23:49 by rmonfort          #+#    #+#             */
/*   Updated: 2025/04/25 20:17:43 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rrx(t_node **stack)
{
	t_node *last;
	t_node *prev;

	if (!stack || !*stack || !(*stack)->next)
		return;
	last = ft_lstlast2(*stack);
	prev = *stack;
	while (prev->next && prev->next != last)
		prev = prev->next;
	prev->next = NULL;
	ft_lstadd_front2(stack, last);
}
void	rra(t_node **a)
{
	rrx(a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	rrx(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	rrx(a);
	rrx(b);
	write(1, "rrr\n", 4);
}
