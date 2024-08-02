/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <malanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:38:43 by malanglo          #+#    #+#             */
/*   Updated: 2023/11/20 10:00:53 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	tailledest;
	size_t	taillesrc;
	size_t	i;

	if (dst == NULL && size == 0)
		return (0);
	tailledest = ft_strlen(dst);
	taillesrc = ft_strlen(src);
	i = 0;
	if (tailledest >= size)
		return (size + taillesrc);
	else
	{
		while (src[i] != '\0' && (i + tailledest + 1) < size)
		{
			dst[tailledest + i] = src[i];
			i++;
		}
		dst[tailledest + i] = '\0';
		return (taillesrc + tailledest);
	}
}
