/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isnegative.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:01:56 by mefische          #+#    #+#             */
/*   Updated: 2025/02/28 10:41:22 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);	
	}
	else
	{
		write(1, "N", 1);
	}
}

int	main(int argc, char **argv)
{
	
	ft_is_negative(atoi(argv[1]));
}
