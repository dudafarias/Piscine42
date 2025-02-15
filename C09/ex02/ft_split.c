/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 19:40:06 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/15 19:49:32 by efarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str)
		{
			count++;
			while (*str && !is_charset(*str, charset))
				str++;
		}
	}
	return (count);
}

char	*copy_word(char *str, char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && !is_charset(str[len], charset))
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	fill_array(char **arr, char *str, char *charset, int words_count)
{
	int	i;

	i = 0;
	while (*str && i < words_count)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str)
		{
			arr[i] = copy_word(str, charset);
			if (!arr[i])
			{
				while (i--)
					free(arr[i]);
				free(arr);
				return (0);
			}
			i++;
			while (*str && !is_charset(*str, charset))
				str++;
		}
	}
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		words_count;

	if (!str || !charset)
		return (NULL);
	words_count = count_words(str, charset);
	arr = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!arr)
		return (NULL);
	arr[words_count] = NULL;
	if (!fill_array(arr, str, charset, words_count))
		return (NULL);
	return (arr);
}
