/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:52:52 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/31 12:44:16 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	subs(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		if (*str != c)
			i++;
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
	}
	return (i);
}

static size_t	word_len(const char *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char	**ft_split(const char *str, char c)
{
	size_t	i;
	size_t	len;
	size_t	size;
	char	**split;

	size = subs(str, c);
	split = malloc(sizeof(char *) * (size + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*str && *str == c)
			str++;
		len = word_len(str, c);
		split[i] = ft_substr(str, 0, len);
		if (split[i] == NULL)
			return (ft_free_matrix((void **)split), NULL);
		str += len;
		i++;
	}
	split[i] = NULL;
	return (split);
}
