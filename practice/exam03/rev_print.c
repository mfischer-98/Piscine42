/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 09:26:17 by mefische          #+#    #+#             */
/*   Updated: 2025/03/11 09:45:19 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;
	int	l;

	i = 0;
	while (str[i])
	{
		i++;
	}
	l = i - 1;
	while (l >= 0)
	{
		write(1, &str[l], 1);
		l--;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rev_print(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
