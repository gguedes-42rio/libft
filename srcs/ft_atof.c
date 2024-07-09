/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:30:55 by gguedes           #+#    #+#             */
/*   Updated: 2023/04/02 17:36:05 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	get_part(const char *str)
{
	double	part;

	part = 0;
	while (ft_isdigit(*str))
	{
		part = part * 10 + *str - '0';
		str++;
	}
	return (part);
}

double	ft_atof(const char *str)
{
	double	int_part;
	double	float_part;
	int		len;
	int		negative;

	negative = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		str++;
	int_part = get_part(str);
	while (ft_isdigit(*str))
		str++;
	if (*str != '.' || !ft_isdigit(str[1]))
		return (int_part);
	str++;
	float_part = get_part(str);
	len = 0;
	while (ft_isdigit(str[len]))
		len++;
	while (len--)
		float_part /= 10;
	return ((int_part + float_part) * negative);
}
