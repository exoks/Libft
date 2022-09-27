/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:59:57 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:00:01 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
/*#include <stdio.h>
int	main(int ac, char **av)
{
	(void) ac;
	printf("%d\n", ft_isprint(*(*(++av))));
	return (0);
}*/
