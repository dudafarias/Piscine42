/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:08:56 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/15 15:21:58 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int	main(void)
{
    int	*range;
    int	i;
    int min = 3, max = 8;

    range = ft_range(min, max);
    if (!range)
    {
        printf("Memory or interval error.\n");
        return 1;
    }

    for (i = 0; i < (max - min); i++)
        printf("%d ", range[i]);
    printf("\n");

    free(range);
    return 0;
}
*/
