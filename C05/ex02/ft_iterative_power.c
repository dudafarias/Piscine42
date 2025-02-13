/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:56:39 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/11 16:53:27 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	a = 1;
	while (power > 0)
	{
		a = a * nb;
		power--;
	}
	return (a);
}
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int x)
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
	int	a;

	a = ft_iterative_power(2, 3);
	ft_putnbr(a);

}*/
