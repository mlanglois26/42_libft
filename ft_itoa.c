/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <malanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:03:44 by malanglo          #+#    #+#             */
/*   Updated: 2023/11/20 10:03:04 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_len(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_alloc(size_t nbr)
{
	char	*res;

	res = malloc(sizeof(*res) * (nbr + 1));
	if (!res)
		return (NULL);
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	len;
	long	nbr;

	len = ft_get_len(n);
	nbr = n;
	if (n < 0)
		nbr = -nbr;
	res = ft_alloc(len);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr == 0)
		res[0] = '0';
	else
	{
		while (nbr != '\0')
		{
			res[--len] = (nbr % 10) + '0';
			nbr = nbr / 10;
		}
		if (n < 0)
			res[0] = '-';
	}
	return (res);
}
