/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:57:04 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 15:57:09 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pt;
	size_t	i;

	pt = (void *) malloc(count * size);
	if (!pt)
		return (0);
	i = -1;
	while (++i < (size * count))
		*((char *)pt + i) = '\0';
	return (pt);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char	*str;
	int	i;

	str = (char *) calloc(3, 1);
	i = -1;
	while (str[++i] == '\0')
		printf("hello world\n");
	return (0);
}
*/
