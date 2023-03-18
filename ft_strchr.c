/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:42:29 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/18 15:37:12 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	char	chr;

	if (str == NULL)
		return (NULL);
	chr = c;
	while (*str && *str != chr)
		str++;
	if (*str == chr)
		return ((char *)str);
	return (NULL);
}
