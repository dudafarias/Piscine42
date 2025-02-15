/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:42:56 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/15 15:44:04 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	return_length(int size, char **strs, int sep_len)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (size - 1) * sep_len;
	return (total_len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest + i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*res;
	char	*ptr;

	if (size == 0)
	{
		res = (char *)malloc(1);
		return (res);
	}
	len = return_length(size, strs, ft_strlen(sep));
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ptr = res;
	i = 0;
	while (i < size)
	{
		ptr = ft_strcpy(ptr, strs[i]);
		if (i + 1 < size)
			ptr = ft_strcpy(ptr, sep);
		i++;
	}
	return (res);
}
