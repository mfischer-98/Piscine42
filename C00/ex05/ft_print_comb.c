/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:38:44 by mefische          #+#    #+#             */
/*   Updated: 2025/02/24 11:51:10 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	comma(char n1, char n2, char n3)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				comma(n1, n2, n3);
				if (n1 == '7' && n2 == '8' && n3 == '9')
					write(1, "", 1);
				else
					write(1, ", ", 2);
				n3 ++;
			}
			n2 ++;
		}
		n1 ++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
