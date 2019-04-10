/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:37:50 by jmousset          #+#    #+#             */
/*   Updated: 2019/04/10 11:42:11 by jmousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#define	YELLOW	"\x1b[33m"
#define	GREEN	"\x1b[32m"
#define	RED		"\x1b[31m"
#define	RESET	"\x1b[0m"

int		main(void)
{
	int		part1;
	int		part2;
	int		part3;

	char	*s1;
	char	*sNULL;
	char	*buff1;

	s1 = "0123456789!bonjour?bonsoir. /";
	sNULL = "\0";

	//ft_strlen
	int		strlen_s1;
	int		ft_strlen_s1;
	int		strlen_NULL;
	int		ft_strlen_NULL;

	strlen_s1 = strlen(s1);
	ft_strlen_s1 = ft_strlen(s1);
	strlen_NULL = strlen(sNULL);
	ft_strlen_NULL = ft_strlen(sNULL);

	printf(YELLOW"strlen : \"0123456789!bonjour?bonsoir. /\" = %d\n"RESET, strlen_s1);
	printf(YELLOW"ft_strlen : \"0123456789!bonjour?bonsoir. /\" = %d\n\n"RESET, ft_strlen_s1);
	printf(YELLOW"strlen : \"NULL\" = %d\n", strlen_NULL);
	printf(YELLOW"ft_strlen : \"NULL\" = %d\n\n", ft_strlen_NULL);

	if (strlen_s1 == ft_strlen_s1 && strlen_NULL == ft_strlen_NULL)
	{
		printf(GREEN"CORRECT\n__________________________________________________\n");
		part1++;
	}
	else
		printf(RED"FALSE\n__________________________________________________\n");

	//ft_strdup
	char	*strdup_s1;
	char	*ft_strdup_s1;
	char	*strdup_NULL;
	char	*ft_strdup_NULL;

	strdup_s1 = strdup(s1);
	ft_strdup_s1 = ft_strdup(s1);
	strdup_NULL = strdup(sNULL);
	ft_strdup_NULL = ft_strdup(sNULL);

	printf(YELLOW"strdup : \"0123456789!bonjour?bonsoir. /\" = %s\n", strdup_s1);
	printf(YELLOW"ft_strdup : \"0123456789!bonjour?bonsoir. /\" = %s\n\n", ft_strdup_s1);
	printf(YELLOW"strdup : \"NULL\" = %s\n", strdup_NULL);
	printf(YELLOW"ft_strdup : \"NULL\" = %s\n\n", ft_strdup_NULL);

	if (strcmp(strdup_s1, ft_strdup_s1) == 0 && strcmp(strdup_NULL, ft_strdup_NULL) == 0)
	{
		printf(GREEN"CORRECT\n__________________________________________________\n");
		part1++;
	}
	else
		printf(RED"FALSE\n__________________________________________________\n");

	//ft_strcpy
	char	*strcpy_s1;
	char	*ft_strcpy_s1;
	char	*strcpy_NULL;
	char	*ft_strcpy_NULL;

	strcpy_s1 = strcpy(buff1, s1);
	ft_strcpy_s1 = ft_strcpy(buff1, s1);
	strcpy_NULL = strcpy(buff1, sNULL);
	ft_strcpy_NULL = ft_strcpy(buff1, sNULL);

	printf(YELLOW"strcpy : \"0123456789!bonjour?bonsoir. /\" = %s\n", strcpy_s1);
	printf(YELLOW"ft_strcpy : \"0123456789!bonjour?bonsoir. /\" = %s\n\n", ft_strcpy_s1);
	printf(YELLOW"strcpy : \"NULL\" = %s\n", strcpy_NULL);
	printf(YELLOW"ft_strcpy : \"NULL\" = %s\n\n", ft_strcpy_NULL);

	if (strcmp(strcpy_s1, ft_strcpy_s1) == 0 && strcmp(strcpy_NULL, ft_strcpy_NULL) == 0)
	{
		printf(GREEN"CORRECT\n__________________________________________________\n");
		part1++;
	}
	else
		printf(RED"FALSE\n__________________________________________________\n");

	//ft_strncpy
	char	*strncpy_s1;
	char	*ft_strncpy_s1;
	char	*strncpy_NULL;
	char	*ft_strncpy_NULL;

	strncpy_s1 = strncpy(dst1, s1, 10);
	ft_strncpy_s1 = ft_strncpy(dst1, s1, 10);
	strncpy_NULL = strncpy(dst1, sNULL, 10);
	ft_strncpy_NULL = ft_strncpy(dst1, sNULL, 10);

	printf(YELLOW"strncpy(10) : \"0123456789!bonjour?bonsoir. /\" = %s\n", strncpy_s1);
	printf(YELLOW"ft_strncpy(10) : \"0123456789!bonjour?bonsoir. /\" = %s\n\n", ft_strncpy_s1);
	printf(YELLOW"strncpy(10) : \"NULL\" = %s\n", strncpy_NULL);
	printf(YELLOW"ft_strncpy(10) : \"NULL\" = %s\n\n", ft_strncpy_NULL);

	if (strcmp(strncpy_s1, ft_strncpy_s1) == 0 && strcmp(strncpy_NULL, ft_strncpy_NULL) == 0)
	{
		printf(GREEN"CORRECT\n__________________________________________________\n");
		part1++;
	}
	else
		printf(RED"FALSE\n__________________________________________________\n");

	//ft_strcat
	char	*strcat_s1;
	char	*ft_strcat_s1;
	char	*strcat_NULL;
	char	*ft_strcat_NULL;

	strcat_s1 = strcat(dst1, s1);
	ft_strcat_s1 = ft_strcat(dst1, s1);
	strcat_NULL = strcat(dst1, sNULL);
	ft_strcat_NULL = ft_strcat(dst1, sNULL);

	printf(YELLOW"strcat : \"0123456789!bonjour?bonsoir. /\" = %s\n", strcat_s1);
	printf(YELLOW"ft_strcat : \"0123456789!bonjour?bonsoir. /\" = %s\n\n", ft_strcat_s1);
	printf(YELLOW"strcat : \"NULL\" = %s\n", strcat_NULL);
	printf(YELLOW"ft_strcat : \"NULL\" = %s\n\n", ft_strcat_NULL);

	if (strcmp(strcat_s1, ft_strcat_s1) == 0 && strcmp(strcat_NULL, ft_strcat_NULL) == 0)
	{
		printf(GREEN"CORRECT\n__________________________________________________\n");
		part1++;
	}
	else
		printf(RED"FALSE\n__________________________________________________\n");

	
	//ft_strlcat
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
