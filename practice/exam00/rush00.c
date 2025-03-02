/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:19:47 by mefische          #+#    #+#             */
/*   Updated: 2025/02/23 16:01:09 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	lin;
	int	col;

	if (x < 1 || y < 1)
		return ;
	lin = 1;
	while (lin <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((col > 1 &&  col < x) && (lin == 1 || lin ==  y))
				ft_putchar('-');
			else if ((lin > 1 && lin < y) && (col == 1 || col == y))
				ft_putchar('|');
			else if ((col > 1 && col < x) &&  (lin > 1 && lin < y))
				ft_putchar(' ');
			else
				ft_putchar('o');
		col ++;
/*				if (col == 1 && lin == 1)
				if (col == x && lin == 1)
				if (col == 1 && lin == y)
				if (col == x && lin == y)*/	
		}
		ft_putchar('\n');
		lin ++;
	}
}

int	main(void)
{
	rush(5,3);
	return (0);
}
