/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:27:46 by mefische          #+#    #+#             */
/*   Updated: 2025/03/08 16:38:29 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index <= 0)
		return -1;
	if (index == 0)
		return 0;
	if (index == 1)
		return 1;
	else
		return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int	main(void)
{
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(3));
}
