/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 11:08:21 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/31 12:38:32 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *s1, char const *s2, size_t len)
{
	size_t	slen;

	if (*s2 == '\0')
		return ((char *)s1);
	if (len == 0)
		return (NULL);
	slen = ft_strlen(s2);
	while (*s1 && slen <= len)
	{
		if (ft_memcmp(s1, s2, slen) == 0)
			return ((char *)s1);
		len--;
		s1++;
	}
	return (NULL);
}
