/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 05:39:12 by rmonfort          #+#    #+#             */
/*   Updated: 2025/03/24 18:51:43 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	px(t_stack *stackX, t_stack *stack2)
{
	t_node	*tmp;

	tmp = stack2->first_element;
	stack2->first_element = stack2->first_element->next;
	tmp->next = stackX->first_element;
	stackX->first_element = tmp;
	stackX->stack_length++;
	stack2->stack_length--;
}

void	pa(t_node *stacka, t_node *stackb)
{
	px(stacka, stackb);
	write(1, "pa\n", 3);
}

void	pb(t_node *stacka, t_node *stackb)
{
	px(stackb, stacka);
	write(1, "pb\n", 3);
}
