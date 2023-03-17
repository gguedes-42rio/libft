/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:55:09 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/16 22:21:58 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char const	*chr_s1;
	unsigned char const	*chr_s2;
	size_t				i;

	if (s1 == NULL && s2 == NULL)
		return (0);
	if (s1 == NULL || s2 == NULL)
		return (1);
	chr_s1 = s1;
	chr_s2 = s2;
	i = -1;
	while (++i < n)
		if (chr_s1[i] != chr_s2[i])
			return (chr_s1[i] - chr_s2[i]);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	if (argc != 4) {
		printf("Usage: ./a.out <s1> <s2> <n>\n");
		return (1);
	}

	int	n = atoi(argv[3]);
	if (strcmp("NULL", argv[1]) == 0 && strcmp("NULL", argv[2]) == 0) {
		printf("NULL: %d\n", ft_memcmp(NULL, NULL, n));
		return (0);
	}
	else if (strcmp("NULL", argv[1]) == 0) {
		printf("NULL: %d\n", ft_memcmp(NULL, argv[2], n));
		return (0);
	}
	else if (strcmp("NULL", argv[2]) == 0) {
		printf("NULL: %d\n", ft_memcmp(argv[1], NULL, n));
		return (0);
	}

	int	expected = memcmp(argv[1], argv[2], n);
	int	result = ft_memcmp(argv[1], argv[2], n);

	if (expected != result)
		printf("Error\nExpected: %d\nResult: %d\n", expected, result);
	else
		printf("Ok!\nExpected: %d\nResult: %d\n", expected, result);
	return (0);
}
*/
