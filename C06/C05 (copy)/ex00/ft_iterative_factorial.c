/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:41:25 by mefische          #+#    #+#             */
/*   Updated: 2025/03/06 14:09:43 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iteractive_factorial(int nb)
{
	int	i;
	int	res;
	
	res = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res = res * i; 
		i ++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_iteractive_factorial(atoi(argv[1])));
	else
		printf("Write a number");  
}
