/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:09:34 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/18 15:36:24 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	int		i;
	char	chr;

	if (str == NULL)
		return (NULL);
	chr = c;
	i = ft_strlen(str);
	while (i && str[i] != chr)
		i--;
	if (str[i] == chr)
		return ((char *)str + i);
	return (NULL);
}
