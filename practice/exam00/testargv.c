/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testargv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:41:30 by mefische          #+#    #+#             */
/*   Updated: 2025/02/27 10:20:52 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{	
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv){
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		printf("\n");
	}
}
