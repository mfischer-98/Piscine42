/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:57:27 by mefische          #+#    #+#             */
/*   Updated: 2025/02/28 13:12:45 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while(*src != '\0')
	{
		dest[i] = src[i];
		i++;
		if (i == n) 
			break;
	}
	dest[i] = 0;
	return (dest);
}

int	main(void)
{
	int	n;
	char	source[9] = "examshell";
	char	desti[9];

	//source[9] = "examshell";
	//desti[9] = "";
	n = 4;
	ft_strncpy(desti, source, n);
	printf("%s", desti);
}
