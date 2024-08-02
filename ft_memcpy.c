/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <malanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:37:10 by malanglo          #+#    #+#             */
/*   Updated: 2023/11/20 10:03:45 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*c_src;
	char	*c_dest;
	size_t	i;

	if (dest == 0 && src == 0)
		return (NULL);
	c_src = (char *)src;
	c_dest = (char *)dest;
	i = 0;
	while (n > i)
	{
		c_dest[i] = c_src[i];
		i++;
	}
	return (dest);
}
