/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:40:11 by gguedes           #+#    #+#             */
/*   Updated: 2023/07/08 20:44:59 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

static size_t	convert_args(va_list args, char c)
{
	size_t	len;
	char	*str;

	len = 0;
	if (c == 'd' || c == 'i')
		str = ft_itoa(va_arg(args, int));
	else if (c == 'u')
		str = ft_utoa(va_arg(args, unsigned int));
	else if (c == 'x')
		str = ft_lxtoa(va_arg(args, unsigned int));
	else if (c == 'p')
	{
		len += ft_putstr_fd("0x", STDOUT_FILENO);
		str = ft_lxtoa(va_arg(args, unsigned long));
	}
	else
	{
		str = ft_lxtoa(va_arg(args, unsigned int));
		ft_strupper(str);
	}
	len += ft_putstr_fd(str, STDOUT_FILENO);
	free(str);
	return (len);
}

static size_t	check_args(va_list args, char c)
{
	if (c == 's')
		return (ft_putstr_fd(va_arg(args, char *), STDOUT_FILENO));
	else if (c == 'c')
		return (ft_putchar_fd(va_arg(args, int), STDOUT_FILENO));
	else if (c == '%')
		return (ft_putchar_fd('%', STDOUT_FILENO));
	return (convert_args(args, c));
}

size_t	ft_printf(const char *str, ...)
{
	size_t	len;
	va_list	args;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
			len += check_args(args, *++str);
		else
			len += ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
	return (len);
}
