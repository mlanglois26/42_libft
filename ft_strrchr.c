/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <malanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:06:06 by malanglo          #+#    #+#             */
/*   Updated: 2023/11/29 10:32:06 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		occurence;
	char	key;

	i = 0;
	occurence = -1;
	key = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == key)
			occurence = i;
		i++;
	}
	if (key == '\0')
		return ((char *)(s + i));
	else if (occurence != -1)
		return ((char *)(s + occurence));
	else
		return (NULL);
}
