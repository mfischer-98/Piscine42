/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 09:25:02 by mefische          #+#    #+#             */
/*   Updated: 2025/03/08 12:21:37 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		i = 1;
		while (argv[i] != 0)
		{
			j = 0;
			while (argv[i][j] != 0)
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}
