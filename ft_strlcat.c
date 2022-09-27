/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:08:01 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:08:05 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	i = dst_len;
	while (*src && i < dstsize - 1)
		dst[i++] = *(src++);
	dst[i] = 0;
	return (dst_len + src_len);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[0xF00] = "hello world";
//	char	*src = "oussama";
	printf("%zu\n", strlcat((void *) 0, src, 0));
	printf("%s\n", src);
	return (0);
}
*/
