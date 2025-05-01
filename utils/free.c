/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 21:37:41 by rmonfort          #+#    #+#             */
/*   Updated: 2025/05/01 04:26:27 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_free(t_stack *stack)
{
	t_node	*cur;
	t_node	*next;

	cur = stack->first_element;
	while (cur)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
	free(stack);
}

void	split_free(char **split)
{
	char	**aux;

	if (split)
	{
		aux = split;
		while (*aux)
			free(*aux++);
		free(split);
	}
}

void	error_exit(t_stack *stack_a, t_stack *stack_b, char **split)
{
	if (split)
		split_free(split);
	if (stack_a)
		stack_free(stack_a);
	if (stack_b)
		stack_free(stack_b);
	write(STDERR_FILENO, "Error\n", 6);
	exit(1);
}
