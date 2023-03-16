/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:55:09 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/12 17:27:22 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char const	*chr_s1;
	unsigned char const	*chr_s2;
	size_t				i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	chr_s1 = s1;
	chr_s2 = s2;
	i = -1;
	while (++i < n)
		if (chr_s1[i] != chr_s2[i])
			return (chr_s1[i] - chr_s2[i]);
	return (0);
}
