/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:52:04 by mefische          #+#    #+#             */
/*   Updated: 2025/02/28 11:04:14 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = atoi (argv[1]);
	y = atoi (argv[2]);
	printf("O primeiro é %d e o segundo é %d\n", x, y);	
	ft_swap(&x, &y);
	printf("O primeiro é %d e o segundo é %d\n", x, y);

}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 2;
	y = 3;
	printf("O primeiro é %d e o segundo é %d\n", x, y);
	ft_swap(&x, &y);
	printf("O primeiro é %d e o segundo é %d\n", x, y);
}*/
