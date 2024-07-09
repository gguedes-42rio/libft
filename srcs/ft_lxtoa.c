/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lxtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:45:55 by gguedes           #+#    #+#             */
/*   Updated: 2023/07/08 20:07:23 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digits(unsigned long num)
{
	size_t	len;

	len = 0;
	while (num != 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

char	*ft_lxtoa(unsigned long num)
{
	size_t	len;
	char	base_str[17];
	char	*new_str;

	if (num == 0)
		return (ft_strdup("0"));
	ft_memcpy(base_str, "0123456789abcdef\0", 17);
	len = digits(num);
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	new_str[len--] = '\0';
	while (num != 0)
	{
		new_str[len--] = base_str[num % 16];
		num /= 16;
	}
	return (new_str);
}
