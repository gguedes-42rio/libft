/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:52:52 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/18 15:37:16 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	subs(char const *str, char c)
{
	int	i;

	if (str == NULL)
		return (0);
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

char	**ft_split(char const *str, char c)
{
	int		i;
	int		len;
	int		size;
	char	**split;

	if (str == NULL)
		return (NULL);
	size = subs(str, c);
	split = malloc(sizeof(char *) * (size + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*str && *str == c)
			str++;
		len = ft_strlen(str) - ft_strlen(ft_strchr(str, c));
		split[i] = ft_substr(str, 0, len);
		if (split[i] == NULL)
			return (free_split(split));
		str += len;
		i++;
	}
	split[i] = NULL;
	return (split);
}
