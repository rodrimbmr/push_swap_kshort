/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_in_k.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:06:53 by rmonfort          #+#    #+#             */
/*   Updated: 2025/05/01 04:49:51 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	get_max_index(t_stack *b)
{
	t_node	*current;
	int		max;

	current = b->first_element;
	max = current->correct_index;
	while (current)
	{
		if (current->correct_index > max)
			max = current->correct_index;
		current = current->next;
	}
	return (max);
}

static int	find_pos_of_max(t_stack *b, int max_index)
{
	t_node	*current;
	int		pos;

	current = b->first_element;
	pos = 0;
	while (current)
	{
		if (current->correct_index == max_index)
			return (pos);
		current = current->next;
		pos++;
	}
	return (-1);
}

static void	move_biggest_to_top(t_stack *b)
{
	int	max_index;
	int	pos;
	int	half;

	max_index = get_max_index(b);
	pos = find_pos_of_max(b, max_index);
	half = b->stack_length / 2;
	if (pos <= half)
	{
		while (b->first_element->correct_index != max_index)
			rb(&b->first_element);
	}
	else
	{
		while (b->first_element->correct_index != max_index)
			rrb(&b->first_element);
	}
}

void	push_to_a(t_stack *a, t_stack *b)
{
	while (b->first_element)
	{
		move_biggest_to_top(b);
		pa(a, b);
	}
}
