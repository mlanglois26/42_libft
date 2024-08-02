/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <malanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:54:48 by malanglo          #+#    #+#             */
/*   Updated: 2023/11/20 10:00:32 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static void	ft_alloc(char **tab, char const *s, char c)
{
	char	**word;
	int		i;
	int		start;
	int		end;

	word = tab;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			++i;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			++i;
		end = i;
		if (end > start)
		{
			*word = ft_substr(s + start, 0, end - start);
			++word;
		}
	}
	*word = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_alloc(new, s, c);
	return (new);
}
