/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 06:35:15 by rmonfort          #+#    #+#             */
/*   Updated: 2025/04/15 16:40:46 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max(t_node *stack)
{
	if (!stack || !stack->next || !stack->next->next)
		return (0);
	if (stack->nbr > stack->next->nbr)
	{
		if (stack->nbr > stack->next->next->nbr)
			return(stack->nbr);
		else
			return(stack->next->next->nbr);
	}
	else
	{
		if (stack->next->nbr > stack->next->next->nbr)
			return(stack->next->nbr);
		else
			return(stack->next->next->nbr);
	}
}
