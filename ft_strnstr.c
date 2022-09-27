/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:09:16 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:09:19 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;
	int	j;

	if (haystack == NULL && n == 0)
		return (0);
	if (needle[0] == 0)
		return ((char *) haystack);
	i = -1;
	while (haystack[++i] && i < (int) n)
	{
		j = -1;
		while (needle[++j] && haystack[i + j] == needle[j] && i + j < (int) n)
			;
		if (j == (int) ft_strlen(needle))
			return ((char *) &haystack[i]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	return (0);
}
*/
