/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:37:50 by jmousset          #+#    #+#             */
/*   Updated: 2019/04/08 16:00:33 by jmousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
