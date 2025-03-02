/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:30:40 by mefische          #+#    #+#             */
/*   Updated: 2025/02/26 11:40:09 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *a / *b;
	*b = t % *b;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 20;
	y = 10;
	ft_ultimate_div_mod(&x, &y);
	printf("O resultado da div é %d e o resto é %d", x, y);
}*/
