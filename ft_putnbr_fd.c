/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:58:16 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/18 15:42:21 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	if (num == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-num, fd);
		return ;
	}
	else if (num > 9)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd((num % 10) + '0', fd);
}
