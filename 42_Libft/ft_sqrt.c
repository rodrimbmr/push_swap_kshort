/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:37:52 by rmonfort          #+#    #+#             */
/*   Updated: 2025/04/26 00:38:22 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nbr)
{
	int	result;

	result = 0;
	if(nbr <= 0)
		return(0);
	while(((result * result) <= nbr) && ((result * result) <= (INT_MAX)))
	{
		result++;
	}
	if((result * result) != nbr)
		result -= 1;
	return(result);
}
