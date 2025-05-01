/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:58:58 by rmonfort          #+#    #+#             */
/*   Updated: 2025/05/01 04:40:22 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = malloc(sizeof(t_stack));
	b = malloc(sizeof(t_stack));
	if (!a || !b)
		return (1);
	a = parsing(argc, argv, a, b);
	if (a->stack_length > 1 && a->stack_length <= 3)
		ft_lownumbshort(*a);
	else
	kshort(a, b);
}
