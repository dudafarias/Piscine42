/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:05:04 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/11 18:08:59 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	i = argc - 1;
	while (i > 0)
	{
		a = 0;
		while (argv[i][a] != '\0')
		{
			write (1, &argv[i][a], 1);
			a++;
		}
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
