/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:26:45 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/31 12:20:50 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digits(int num)
{
	size_t	len;

	len = 0;
	if (num < 0)
		len++;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	size_t	len;
	char	*new_str;

	if (num == 0)
		return (ft_strdup("0"));
	if (num == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = digits(num);
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	new_str[len--] = '\0';
	if (num < 0)
	{
		new_str[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		new_str[len--] = num % 10 + '0';
		num /= 10;
	}
	return (new_str);
}
