/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguney <iguney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:24:18 by iguney            #+#    #+#             */
/*   Updated: 2024/08/22 20:40:44 by iguney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a;
	int b;
	int *div;
	int *mod;

	div = &a;
	mod = &b;
	
	a = 26;
	b = 0;
	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d", *mod);
}