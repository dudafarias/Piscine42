/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:28:36 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/04 20:49:07 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	place;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		place = 0;
		while (str[i + place] == to_find[place] && to_find[place] != '\0')
		{
			place++;
		}
		if (to_find[place] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	 char str[] = "Hello, World!";
    char sub1[] = "World";
    char sub2[] = "Test";

    printf("%s\n", ft_strstr(str, sub1)); // Output: "World!"
    printf("%s\n", ft_strstr(str, sub2)); // Output: (null)

    return 0;
}*/
