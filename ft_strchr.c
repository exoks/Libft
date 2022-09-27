/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:06:38 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:06:54 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char) c)
		s++;
	if (*s != 0 || (c == 0 && *s == 0))
		return ((char *) s);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s[7] = "oussama";

	printf("%s\n", ft_strchr(s, 0));
	return (0);
}
*/
