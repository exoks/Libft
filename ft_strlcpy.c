/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:08:17 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:08:20 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = -1;
	while (++i < dstsize - 1 && src[i] && dstsize != 0)
		dst[i] = src[i];
	if (dstsize)
		dst[i] = 0;
	return (len);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	printf("%zu\n", ft_strlcpy(av[1], av[2], atoi(av[3])));
	printf("%s\n", av[1]);
	return (0);
}
*/
