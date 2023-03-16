/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:31:59 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/12 17:30:06 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t size)
{
	size_t	i;

	if (src == NULL || dst == NULL)
		return (ft_strlen(src));
	if (!size)
		return (ft_strlen(src));
	i = -1;
	size--;
	while (src[++i] && i < size)
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}
