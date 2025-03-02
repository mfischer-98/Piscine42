/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:00:31 by mefische          #+#    #+#             */
/*   Updated: 2025/02/28 11:10:56 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = atoi (argv[1]);
	y = atoi (argv[2]);
	div = 0;
	mod = 0;
	ft_div_mod(x, y, &div, &mod);
	printf("A divisao é %d e o resto é %d", div, mod);
}
