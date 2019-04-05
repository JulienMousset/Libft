/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:08:28 by jmousset          #+#    #+#             */
/*   Updated: 2019/04/05 18:30:31 by jmousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
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

int		main(void)
{
	char	dst[8] = "Salut";
	char	src[] = "123456!";
	unsigned int	size = 5;
	unsigned int	res1;
	unsigned int	res2;
	res1 = strlcat(dst, src, size);
	res2 = ft_strlcat(dst, src, size);
	printf("strlcat : %s & %d\n", dst, res1);
	printf("ft_strlcat : %s & %d\n", dst, res2);
	return (0);
}
