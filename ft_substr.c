/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:06:04 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/12 16:36:59 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	i;
	unsigned int	slen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	s += start;
	slen -= start;
	if ((size_t)slen > len)
		slen = len;
	new_str = malloc(sizeof(char) * (slen + 1));
	if (new_str == NULL)
		return (NULL);
	i = -1;
	while (++i < slen)
		new_str[i] = s[i];
	new_str[i] = '\0';
	return (new_str);
}
