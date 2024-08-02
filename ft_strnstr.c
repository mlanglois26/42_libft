/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <malanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:02:38 by malanglo          #+#    #+#             */
/*   Updated: 2023/11/29 09:42:36 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*sub;
	size_t	little_len;
	size_t	i;
	size_t	j;

	if (!big && !len)
		return (0);
	sub = (char *)big;
	little_len = ft_strlen(little);
	if (little_len == 0 || big == little)
		return (sub);
	i = 0;
	while (sub[i] != '\0' && i < len)
	{
		j = 0;
		while (sub[i + j] != '\0' && sub[i + j] == little[j] && i + j < len)
			j++;
		if (j == little_len)
			return (sub + i);
		i++;
	}
	return (NULL);
}
