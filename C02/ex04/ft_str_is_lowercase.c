/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 10:41:00 by mefische          #+#    #+#             */
/*   Updated: 2025/03/02 10:56:36 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%i", ft_str_is_lowercase("ushuah"));
	printf("%i", ft_str_is_lowercase("ushAAuah"));
	printf("%i", ft_str_is_lowercase("213Aah"));
	printf("%i", ft_str_is_lowercase("KKKKK"));
	printf("%i", ft_str_is_lowercase(""));
}*/
