/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 09:45:42 by mefische          #+#    #+#             */
/*   Updated: 2025/03/11 11:16:40 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_firstword(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
	if ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
	{
		if (flag == 0)
			i++;
		else
			break ;
	}
	else
	{
		write(1, &str[i], 1);
		i++;
		flag = 1;
	}
	}
	return (str);
}	

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_firstword(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
