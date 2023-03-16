/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:09:34 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/12 17:30:36 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int		i;
	char	chr;

	if (s == NULL)
		return (NULL);
	chr = c;
	i = ft_strlen(s);
	while (i && s[i] != chr)
		i--;
	if (s[i] == chr)
		return ((char *)s + i);
	return (NULL);
}
