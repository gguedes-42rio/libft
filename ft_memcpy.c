/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:52:33 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/29 18:33:55 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*chr_dest;
	const char	*chr_src;

	if (dst == NULL && src == NULL)
		return (NULL);
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
