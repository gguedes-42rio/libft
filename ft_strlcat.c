/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 11:42:42 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/12 17:29:57 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (src == NULL || dst == NULL)
		return (size + ft_strlen(src));
	i = ft_strlen(dst);
	if (size <= i)
		return (size + ft_strlen(src));
	j = -1;
	size--;
	while (src[++j] && i + j < size)
		dst[i + j] = src[j];
	dst[i + j] = 0;
	return (i + ft_strlen(src));
}
