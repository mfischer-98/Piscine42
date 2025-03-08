/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:01:03 by mefische          #+#    #+#             */
/*   Updated: 2025/03/08 16:24:57 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	temp;	

	temp = 0;
	res = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power >= 1)
	{
		res = nb * nb;
		power--;
	}
	return res;
}

int	main(void)
{
	printf("%d", ft_iterative_power(5,3));
}
