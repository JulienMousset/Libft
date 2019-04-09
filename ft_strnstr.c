/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:30:18 by jmousset          #+#    #+#             */
/*   Updated: 2019/04/08 16:05:18 by jmousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return (haystack[i]);
	while (haystack[i] && needle[j] && j <= len)
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (haystack[i] != needle[j])
			i++;
	}
	if (needle[j] == needle[len])
		return (haystack[i - j]);
	else
		return (NULL);
}
