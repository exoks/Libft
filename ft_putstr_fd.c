/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:05:38 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:05:41 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s && fd != -1)
		write(fd, s++, 1);
}
/*
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("d.txt", O_CREAT | O_RDWR, 0777);
	ft_putstr_fd("hello world", fd);
	return (0);
}
*/
