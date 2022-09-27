/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:03:03 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:03:07 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n && *((unsigned char *)s + i) != (unsigned char)c)
		;
	if (i == n)
		return (0);
	return ((void *) &s[i]);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%s\n", memchr(av[1], av[2][0], 8));
	return (0);
}
*/
