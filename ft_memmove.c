/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:31:23 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/12 17:28:18 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	char		*chr_dest;
	char const	*chr_src;

	if (dest == NULL || src == NULL)
		return (dest);
	if (dest > src)
	{
		chr_dest = dest;
		chr_src = src;
		while (n--)
			chr_dest[n] = chr_src[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
