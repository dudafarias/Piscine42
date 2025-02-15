/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:34:44 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/15 15:08:09 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int main()
{
    char *original = "Hello, world!\n";
    char *duplicate;
    
    // Duplicate the string
    duplicate = ft_strdup(original);

    // Check if malloc succeeded
    if (duplicate == NULL)
    {
        write(1, "Memory allocation failed!\n", 25);
        return 1;
    }

    write(1, "Original: ", 10);
    write(1, original, 14);

    write(1, "Duplicate: ", 11);
    write(1, duplicate, 14);

    free(duplicate);

    return 0; // Success
}*/
