/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <malanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:14:42 by malanglo          #+#    #+#             */
/*   Updated: 2023/11/20 10:01:26 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_char(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_alloc(size_t n)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * (n + 1));
	if (!res)
		return (NULL);
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_check_char((char *)set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_check_char((char *)set, s1[end]))
		end--;
	res = ft_alloc(end - start + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		res[i] = s1[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
