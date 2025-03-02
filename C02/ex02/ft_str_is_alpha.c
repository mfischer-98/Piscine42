/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:20:02 by mefische          #+#    #+#             */
/*   Updated: 2025/03/01 18:03:21 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1, "t", 1);
			return (1);
			
		}
		else if (str[i] == "")
		{
			write(1, "t", 1);
			return (1);
		}	
		else
		{ 
			write(1, "f", 1);
			return (0);	
		}
		i++;
		
	}
	return (1);
}

int	main(void)
{ 
	ft_str_is_alpha("abcdefg");
	return (0);
}
