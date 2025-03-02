/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultimate_div_mod.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:11:23 by mefische          #+#    #+#             */
/*   Updated: 2025/02/28 11:25:29 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *a / *b;
	*b = t % *b;
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	ft_ultimate_div_mod(&x, &y);
	printf("A divisao é %d e o resto é %d", x, y);
}
