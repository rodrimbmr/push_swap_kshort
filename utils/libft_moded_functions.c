/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_moded_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:59:28 by rmonfort          #+#    #+#             */
/*   Updated: 2025/04/25 20:16:10 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lstnew2(int content_que_queremos_copiar)
{
	t_node	*nl;

	nl = ft_calloc(1, sizeof(t_node));
	if (!nl)
		return (NULL);
	nl->nbr = content_que_queremos_copiar;
	nl->next = NULL;
	return (nl);
}
void	ft_lstadd_back2(t_node **lst, t_node *new)
{
	t_node	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast2(*lst);
		last->next = new;
	}
}

t_node	*ft_lstlast2(t_node *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_front2(t_node **lst, t_node *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
