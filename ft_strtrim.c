/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:54 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/18 15:36:17 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	int		len;
	char	*new_str;

	if (str == NULL)
		return (NULL);
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
