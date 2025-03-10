/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:20:02 by mefische          #+#    #+#             */
/*   Updated: 2025/03/02 10:23:43 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{ 
	char	name[] = "assha";
	char	name2[] = "aaushu75765";
	char	name3[] = "";

	printf("%d", ft_str_is_alpha(name));
	printf("%d", ft_str_is_alpha(name2));
	printf("%d", ft_str_is_alpha(name3));
	return (0);
}*/
