/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnumbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 09:58:39 by mefische          #+#    #+#             */
/*   Updated: 2025/02/28 10:01:31 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while(n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
