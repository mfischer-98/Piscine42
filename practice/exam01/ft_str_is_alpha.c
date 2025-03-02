/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:13:14 by mefische          #+#    #+#             */
/*   Updated: 2025/02/28 13:23:56 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
	if (65 < str[i] < 122)
		{
			return (0);
		}
	else
		{
			return (1);
		}
	}
}

int	main()
{
	ft_str_is_alpha("Hbcdefg");
	ft_str_is_alpha("1554ad54");
	ft_str_is_alpha("");
}
