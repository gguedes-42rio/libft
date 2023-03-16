/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 23:22:42 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/12 17:27:28 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	char		chr;
	char const	*chr_s;
	size_t		i;

	if (s == NULL)
		return (NULL);
	chr = c;
	chr_s = s;
	i = -1;
	while (++i < n)
		if (chr_s[i] == chr)
			return ((void *)s + i);
	return (NULL);
}
