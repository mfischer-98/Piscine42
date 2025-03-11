/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strupcase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:24:52 by mefische          #+#    #+#             */
/*   Updated: 2025/03/06 16:29:03 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	printf("%s", ft_strupcase(argv[1]));
}
