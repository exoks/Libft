/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:09:02 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:11:26 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = -1;
	while ((s1[++i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - s2[i]);
	}
	return (0);
}
// the return value must be casted to (unsigned char) : 
//had l9adiay ghadi dir shefting lvalue ila kant < 0
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%d\n", ft_strncmp(av[1], av[2], 3));
	return (0);
}
*/
