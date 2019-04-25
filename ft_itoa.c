/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 13:56:39 by jmousset          #+#    #+#             */
/*   Updated: 2019/04/25 15:54:51 by jmousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlen(int n)
{
	int				res;
	unsigned int	n_cpy;

	res = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n_cpy = -n;
		res++;
	}
	else
		n_cpy = n;
	while (n_cpy)
	{
		n_cpy = n_cpy / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	n_cpy;
	char			*res;

	i = 0;
	if (!(res = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1))))
	return (NULL);
	if (n < 0)
	{
		res[i++] = '-';
		n_cpy = -n;
	}
	else
		n_cpy = n;

	while ((n_cpy /= 10) > 0)
	{
		res[i] = n % 10 + '0';
		i++;
		n_cpy = n_cpy / 10;
	}
	res[i] = '\0';
	return (res);
}
