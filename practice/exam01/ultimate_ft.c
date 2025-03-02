/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultimate_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:45:57 by mefische          #+#    #+#             */
/*   Updated: 2025/02/28 10:51:41 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	x;
	int	*nbr1;
	int     **nbr2;
	int     ***nbr3;
	int     ****nbr4;
	int     *****nbr5;
	int     ******nbr6;
	int     *******nbr7;
	int	********nbr8;
	int	*********nbr9;

	x = 5;
	nbr1 = &x;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	ft_ultimate_ft(nbr9);
	printf("%d", x);
}
