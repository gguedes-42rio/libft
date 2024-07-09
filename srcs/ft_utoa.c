/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:26:45 by gguedes           #+#    #+#             */
/*   Updated: 2023/07/08 19:51:15 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digits(unsigned int num)
{
	size_t	len;

	len = 0;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned int num)
{
	size_t	len;
	char	*new_str;

	if (num == 0)
		return (ft_strdup("0"));
	len = digits(num);
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	new_str[len--] = '\0';
	while (num != 0)
	{
		new_str[len--] = num % 10 + '0';
		num /= 10;
	}
	return (new_str);
}
