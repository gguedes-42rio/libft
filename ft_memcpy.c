/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:52:33 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/18 15:37:51 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	size_t		i;
	char		*chr_dest;
	char const	*chr_src;

	if (dst == NULL || src == NULL)
		return (dst);
	i = 0;
	chr_dest = dst;
	chr_src = src;
	while (i < n)
	{
		chr_dest[i] = chr_src[i];
		i++;
	}
	return (dst);
}
