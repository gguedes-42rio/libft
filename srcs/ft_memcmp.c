/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:55:09 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/31 12:21:47 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*chr_s1;
	unsigned const char	*chr_s2;
	size_t				i;

	chr_s1 = s1;
	chr_s2 = s2;
	i = 0;
	while (i < n)
	{
		if (chr_s1[i] != chr_s2[i])
			return (chr_s1[i] - chr_s2[i]);
		i++;
	}
	return (0);
}
