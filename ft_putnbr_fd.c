/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:58:16 by gguedes           #+#    #+#             */
/*   Updated: 2023/07/08 20:27:09 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_fd(int num, int fd)
{
	size_t	len;

	len = 0;
	if (num == INT_MIN)
		return (ft_putstr_fd("-2147483648", fd));
	if (num < 0)
		return (ft_putchar_fd('-', fd) + ft_putnbr_fd(-num, fd));
	else if (num > 9)
		len += ft_putnbr_fd(num / 10, fd);
	return (ft_putchar_fd((num % 10) + '0', fd) + len);
}
