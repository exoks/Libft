/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:58:29 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 15:58:33 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(int ac, char **av)
{
	printf("%d\n", ft_isalpha(*(*(++av))));
	//printf("%d\n", isalpha(-100));
	return (0);
}*/
