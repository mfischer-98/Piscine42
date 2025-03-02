/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:24:29 by mefische          #+#    #+#             */
/*   Updated: 2025/02/26 10:29:39 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	d;
	int	m;

	x = 20;
	y = 10;
	d = 47;
	m = 2;
	ft_div_mod(x, y, &d, &m);
	printf("A divisao é %d e o módulo é %d", d, m); 
}*/
