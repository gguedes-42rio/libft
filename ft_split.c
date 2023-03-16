/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:52:52 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/12 16:38:50 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	subs(char const *s, char c)
{
	int	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
			i++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (i);
}

static void	*free_split(char **split)
{
	int	i;

	if (split == NULL)
		return (NULL);
	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	int		size;
	char	**split;

	if (s == NULL)
		return (NULL);
	size = subs(s, c);
	split = malloc(sizeof(char *) * (size + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*s && *s == c)
			s++;
		len = ft_strlen(s) - ft_strlen(ft_strchr(s, c));
		split[i] = ft_substr(s, 0, len);
		if (split[i] == NULL)
			return (free_split(split));
		s += len;
		i++;
	}
	split[i] = NULL;
	return (split);
}
