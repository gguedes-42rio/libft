/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:31:23 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/18 15:37:44 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t n)
{
	char		*chr_dest;
	char const	*chr_src;

	if (dst == NULL || src == NULL)
		return (dst);
	if (dst > src)
	{
		chr_dest = dst;
		chr_src = src;
		while (n--)
			chr_dest[n] = chr_src[n];
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
