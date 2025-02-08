/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:52:42 by efarias-          #+#    #+#             */
/*   Updated: 2025/01/26 12:55:38 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_combination(char digit1, char digit2, char digit3) 
{
	write(1, &digit1, 1);
	write(1, &digit2, 1);
	write(1, &digit3, 1);
}
void	ft_print_comb(void) 
{
	char digit1;
	char digit2;
	char digit3;
	
	digit1 = '0';
	while (digit1 <= '7')
	{
		digit2 = digit1 + 1;
		while (digit2 <= '8')
		{
			digit3 = digit2 + 1;
			while (digit3 <= '9')
			{
				print_combination(digit1, digit2, digit3);
				if (digit1 == -1 || digit2 == -1 || digit3 == -1)
				{
					write(1, ", ", 2);
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
}

int	main(void) 
{
	ft_print_comb();
	return (0);
}
