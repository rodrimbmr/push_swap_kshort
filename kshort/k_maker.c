/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_maker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:04:42 by rmonfort          #+#    #+#             */
/*   Updated: 2025/05/01 05:06:18 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	k_maker(t_stack a, t_stack b)
{
	int	k;
	t_node	*i;

	i = a.first_element;
	k = ft_sqrt(a.stack_length) * 1.4;
	while (i != NULL)
	{
		if (i->correct_index <= b.stack_length)
			pb(&a, &b);
		else if(i->correct_index <= (b.stack_length + k))
		{
			pb(&a, &b);
			rb(&b.first_element);
		}
		else
			ra(&a.first_element);
	}
}
