/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:26:33 by mefische          #+#    #+#             */
/*   Updated: 2025/02/28 13:56:32 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	char	convert;

	i = size;
	while (tab[i] != '\0' && i >= 0)
	{
		convert = tab[i] - '0'; 
		write (1, &convert, 1);
		i--;
	}
}

int	main(void)
{
	int	n;
	int	numeros[5] = {1,6,7,3,9};

	n = 5;
	ft_rev_int_tab(numeros, n);
}
