/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 23:22:42 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/31 12:19:03 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		chr;
	const char	*chr_s;
	size_t		i;

	chr = c;
	chr_s = s;
	i = 0;
	while (i < n)
	{
		if (chr_s[i] == chr)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
