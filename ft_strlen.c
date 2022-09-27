/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:08:37 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:08:40 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	if (*s)
		return (1 + ft_strlen(++s));
	return (0);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	printf("the len : %d\n", ft_strlen(av[1]));
	return (0);
}
*/
