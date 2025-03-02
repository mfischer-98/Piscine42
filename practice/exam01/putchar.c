/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 09:17:17 by mefische          #+#    #+#             */
/*   Updated: 2025/02/28 11:33:45 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	ft_putchar(char *c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	ft_putchar(argv[1]);
}


