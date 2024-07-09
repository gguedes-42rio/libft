/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:38:20 by gguedes           #+#    #+#             */
/*   Updated: 2023/06/13 17:38:20 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	subs(const char *str, char c)
{
	size_t	i;

	if (*str == '\0')
		return (0);
	i = 0;
	while (*str)
	{
		if (*str == c)
			i++;
		str++;
	}
	if (*(str - 1) != c)
		return (i + 1);
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

char	**ft_split_lines(const char *str, char c)
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
		len = word_len(str, c);
		split[i] = ft_substr(str, 0, len);
		if (split[i] == NULL)
			return (ft_free_matrix(split), NULL);
		str += len + 1;
		i++;
	}
	split[i] = NULL;
	return (split);
}
