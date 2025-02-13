/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:28:33 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/11 16:54:40 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	a;

	if (nb < 0)
		return (0);
	i = 0;
	a = 0;
	while (a < nb)
	{
		a = i * i;
		if (a == nb)
			return (i);
		i++;
	}
	return (0);
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

	a = ft_sqrt(25);
	ft_putnbr(a);
}*/
