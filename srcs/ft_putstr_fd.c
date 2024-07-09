/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:39:46 by gguedes           #+#    #+#             */
/*   Updated: 2023/07/08 20:49:29 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr_fd(const char *str, int fd)
{
	if (str == NULL)
		return (write(fd, "(null)", 6));
	return (write(fd, str, ft_strlen(str)));
}
