/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguney <iguney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 23:56:50 by iguney            #+#    #+#             */
/*   Updated: 2024/09/04 22:20:23 by iguney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	i;
	int	*cpy;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	cpy = malloc(bound * sizeof(int));
	if (!cpy)
	{
		*range = 0;
		return (-1);
	}
	*range = cpy;
	i = 0;
	while (i < bound)
	{
		cpy[i] = min + i;
		i++;
	}
	return (bound);
}
