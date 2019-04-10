/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:08:28 by jmousset          #+#    #+#             */
/*   Updated: 2019/04/10 12:40:03 by jmousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && i < (size - 1))
		dst[i++] = src[j++];
	if (size != 0 && size >= i)
		dst[i] = '\0';
	if (size <= i)
	{
		while (src[j])
			j++;
		return (j + size);
	}
	else
	{
		while (src[j])
			j++;
		return (i + size);
	}
}
