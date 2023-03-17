/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:54:16 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/16 21:11:20 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int	num;
	int	negative;

	if (str == NULL)
		return (0);
	num = 0;
	negative = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (num * negative);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	if (argc < 2) {
		printf("Usage: ./a.out <numbers or NULL>\n");
		return (1);
	}

	int	expected;
	int	result;
	int i = 1;
	while (argv[i]) {
		if (strcmp("NULL", argv[i]) == 0) {
			printf("Does not segfault!\nNULL: %d\n", ft_atoi(argv[i]));
		}
		else {
			expected = atoi(argv[i]);
			result = ft_atoi(argv[i]);
			if (expected != result)
				printf("Error!\nExpected: %d\nResult:%d\n", expected, result);
			else
				printf("Ok!\nExpected: %d\nResult:%d\n", expected, result);
		}
		i++;
	}
	return (0);
}
*/
