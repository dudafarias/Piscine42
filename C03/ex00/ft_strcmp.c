/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:40:47 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/04 18:21:59 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "j;rojtojpewjoej";
	str2 = "wkewkneefrt";
	printf("%d\n", ft_strcmp(str1, str2));
}*/
