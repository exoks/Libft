/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:04:32 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:04:35 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

// if c < 0 this value will be shefted (that's why i used unsigne>
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*med;
	size_t			i;

	med = (unsigned char *)b;
	i = -1;
	while (++i < len)
		med[i] = c;
	return (b);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_memset(av[1], av[2][0], atoi(av[3])));
	return (0);
}*/
