/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <efarias-@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:35:51 by efarias-          #+#    #+#             */
/*   Updated: 2025/01/24 09:26:49 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	answer;

	if (n >= 0)
	{
		answer = 'P';
		write(1, &answer, 1);
	}
	else
	{
		answer = 'N';
		write(1, &answer, 1);
	}
}

int	main(void)
{
	ft_is_negative(-1);

	return (0);
}

