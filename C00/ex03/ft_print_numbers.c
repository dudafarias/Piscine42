/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <efarias-@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:25:22 by efarias-          #+#    #+#             */
/*   Updated: 2025/01/23 21:34:34 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num <= '9')
	{
		write (1, &num, 1);
		num++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
