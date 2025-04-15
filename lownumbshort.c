/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lownumbshort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 05:58:38 by rmonfort          #+#    #+#             */
/*   Updated: 2025/04/15 13:59:39 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	short_two(t_stack stack)
{
	if (stack.first_element->nbr > stack.first_element->next->nbr)
		ra(&stack.first_element);
}

static void	short_three(t_node **a)
{
	int	biggest;

	biggest = find_max(*a);
	if (biggest == (*a)->nbr)
		ra(a);
	else if ((*a)->next->nbr == biggest)
		rra(a);
	if ((*a)->nbr > (*a)->next->nbr)
		sa(*a);
}
void	ft_lownumbshort(t_stack stack)
{
	if(stack.stack_length == 2)
		short_two(stack);
	if(stack.stack_length == 3)
		short_three(&stack.first_element);
}
