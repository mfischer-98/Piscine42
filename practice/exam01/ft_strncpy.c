/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:11:49 by mefische          #+#    #+#             */
/*   Updated: 2025/03/03 15:31:07 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while(src[i] != '\0'&& i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (*dest);	
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		unsigned int	n;
		char	destin[255];
	
		n = 3;
		ft_strncpy(destin, argv[1], n);
		printf("%s\n%s", argv[1], destin);
	}
	else
		printf("Write your string between quotes.");
	return (0);
}
