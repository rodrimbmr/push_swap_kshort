/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:14:15 by rmonfort          #+#    #+#             */
/*   Updated: 2025/04/15 14:01:02 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include "42_Libft/libft.h"

typedef struct s_node
{
	int				nbr;
	int				correct_index;
	struct s_node	*next;
}	t_node;

typedef	struct s_head
{
	int		stack_length;
	t_node	*first_element;
}	t_stack;

//utils
int		find_max(t_node *stack);
void	pa(t_node *stacka, t_node *stackb);
void	pb(t_node *stacka, t_node *stackb);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	sa(t_node *a);
void	sb(t_node *b);
void	ss(t_node *a, t_node *b);

//parseo
t_stack		*parsing(int argc, char *argv[], t_stack *a, t_stack *b);

//shorting
void	ft_lownumbshort(t_stack stack);

//free
void	stack_free(t_stack *stack);
void	split_free(char **split);
void	error_exit(t_stack *stack_a, t_stack *stack_b, char **split);

//libft moded
t_node	*ft_lstnew2(int content_que_queremos_copiar);
void	ft_lstadd_back2(t_node **lst, t_node *new);
t_node	*ft_lstlast2(t_node *lst);

# endif
