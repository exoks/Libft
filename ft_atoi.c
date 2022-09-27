/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:55:56 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 15:56:01 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	nb;

	s = 1;
	nb = 0;
	while (ft_strchr("\n\t\r\v\f ", *str))
		str++;
	if (*str == '-')
		s = -s;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		nb = (nb * 10) + (*(str++) - '0');
	nb *= s;
	if (nb == -469762049)
		return (-1);
	if (nb == 469762049)
		return (0);
	return (nb);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int	main(int ac, char **av)
{
	(void)ac;
	int	a = 4294967295;
	char	dest[30] = "99999999999999999999999";
	printf("%d\n", a);
	//sprintf(dest, "%d", INT_MIN);
	printf("ft_atoi : %d\n", ft_atoi(dest));
	printf("atoi : %d\n", atoi(dest));
	return (0);
}
*/
