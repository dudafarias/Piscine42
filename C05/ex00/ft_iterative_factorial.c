/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:35:51 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/11 16:52:11 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
}
*/
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (++i <= nb)
	{
		a = a * i;
	}
	return (a);
}

/*void	ft_putnbr(int x)
{
	if (x < 10)
	{
		ft_putchar(x + '0');
	}
	else
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
}
int	main(void)
{
	int	n;

	n = ft_iterative_factorial(10);
	ft_putnbr(n);
	write(1, &n, 1);
}*/
