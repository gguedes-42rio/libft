/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:49:14 by gguedes           #+#    #+#             */
/*   Updated: 2023/03/31 17:36:31 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_read_file(int fd)
{
	int		bytes_read;
	char	*tmp;
	char	*file_content;
	char	buffer[BUFFER_SIZE + 1];

	file_content = ft_strdup("");
	bytes_read = BUFFER_SIZE;
	while (bytes_read == BUFFER_SIZE)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(file_content), NULL);
		buffer[bytes_read] = '\0';
		tmp = ft_strjoin(file_content, buffer);
		free(file_content);
		file_content = tmp;
	}
	return (file_content);
}
