/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kshort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 04:31:05 by rmonfort          #+#    #+#             */
/*   Updated: 2025/05/01 04:47:04 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	kshort(t_stack *a, t_stack *b)
{
	assign_indexes(a);
	k_maker(*a, *b);
	push_to_a(a, b);
}
