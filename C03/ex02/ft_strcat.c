/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:26:08 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/04 19:46:37 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
	{
		i1++;
	}
	while (src[i2] != '\0')
	{
		dest[i1] = src [i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[50] = "bonjour";
	char	*src;

	src = " les amis";
	printf(".%s.\n", ft_strcat(dest, src));
}*/
