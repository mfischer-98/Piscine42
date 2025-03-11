/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:59:14 by mefische          #+#    #+#             */
/*   Updated: 2025/03/07 13:16:14 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print (char *str)
{
	int	i;
	int	j;

	i = 0;	 
	while (str[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	while (str[j] > 0 && j >= 0)
	{
		write(1, &str[j], 1);	
		j--;
	}
	write(1, "\n", 1);
	return(str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rev_print(argv[1]);	
}

