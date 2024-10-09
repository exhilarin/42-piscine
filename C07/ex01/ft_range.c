/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguney <iguney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 23:45:47 by iguney            #+#    #+#             */
/*   Updated: 2024/09/04 22:20:02 by iguney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*cpy;

	if (min >= max)
		return (0);
	range = max - min;
	cpy = malloc(range * sizeof(int));
	if (!cpy)
		return (0);
	i = 0;
	while (i < range)
	{
		cpy[i] = min + i;
		i++;
	}
	return (cpy);
}
