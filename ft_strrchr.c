/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:10:46 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:11:50 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0 && s[len] != c)
		len--;
	if (len == -1)
		return (0);
	return ((char *) &s[len]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[7] = "oussama";

	printf("%s\n", strrchr(str, 7));
	return (0);
}
*/
