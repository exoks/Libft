/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:03:24 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:03:27 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;

	str1 = (unsigned char *) s1;
	i = 0;
	while (i < n && str1[i] == *((unsigned char *)s2 + i))
		i++;
	if (i != n)
		return (str1[i] - *((unsigned char *)s2 + i));
	return (0);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	int	a[5] = {1, 2, 3, 4, 5};
	int	b[5] = {1, 2, 3, 7, 8};
	printf("%d\n", memcmp(a, b, 20));
	return (0);
}
*/
// i can say that casting is a tool to determine how to move in the memory
// i can move byte by byte (char) or 4 byte by 4 byte (int)...
