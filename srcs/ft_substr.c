/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:06:04 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/31 11:48:26 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*new_str;

	slen = ft_strlen(str);
	if ((size_t)start > slen)
		return (ft_strdup(""));
	str += start;
	slen -= start;
	if (slen > len)
		slen = len;
	new_str = malloc(sizeof(char) * (slen + 1));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
