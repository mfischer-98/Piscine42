/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:16:57 by mefische          #+#    #+#             */
/*   Updated: 2025/02/26 10:01:35 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	t;

	t = 0;
	t = *a;
	*a = *b;
	*b = t;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 40;
	y = 10;
	ft_swap(&x, &y);
	printf("the first number is %d\n" "and the second number is %d\n", x, y);
}*/
