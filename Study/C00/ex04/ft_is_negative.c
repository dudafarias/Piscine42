/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:01:35 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/13 20:04:34 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;

	if (n >= 0)
	{
		a = 'P';
		write(1, &a, 1);
	}
	else
	{
		a = 'N';
		write(1, &a, 1);
	}
}
