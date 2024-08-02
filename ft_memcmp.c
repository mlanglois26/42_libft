/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <malanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:01:46 by malanglo          #+#    #+#             */
/*   Updated: 2023/11/20 09:59:52 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	str1;
	unsigned char	str2;

	while (n > 0)
	{
		str1 = *(unsigned char *)s1;
		str2 = *(unsigned char *)s2;
		if (str1 != str2)
			return (str1 - str2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
