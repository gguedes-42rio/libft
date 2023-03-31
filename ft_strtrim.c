/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:54 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/31 12:27:12 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, const char *set)
{
	size_t	len;
	char	*new_str;

	if (set == NULL)
		return (ft_strdup(str));
	while (*str && ft_strchr(set, *str))
		str++;
	len = ft_strlen(str) - 1;
	while (str[len] && ft_strchr(set, str[len]))
		len--;
	new_str = ft_substr(str, 0, len + 1);
	return (new_str);
}
