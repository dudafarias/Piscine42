/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:22:59 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/15 15:33:15 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min ++;
		i++;
	}
	*range = arr;
	return (size);
}
/*
int		main(void)
{
	int i;
	int *tab;
	int min;
	int max;
	int size;

	min = 0;
	max = 5;
	size = ft_ultimate_range(&tab, min, max);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
		{
			printf("%d\n", tab[i]);
		}
	}
	else
		printf("tozz");
}
*/
