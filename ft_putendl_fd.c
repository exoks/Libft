/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:05:04 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:05:07 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s && fd != -1)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("d.txt", O_CREAT | O_RDWR, 0777);
	ft_putendl_fd("hello world", fd);
	return (0);
}
*/
