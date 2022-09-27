/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:07:45 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:07:48 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if (!s1 || !s2)
		return (0);
	str = (char *) malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!str)
		return (0);
	i = -1;
	while (*s1)
		str[++i] = *(s1++);
	while (*s2)
		str[++i] = *(s2++);
	str[++i] = 0;
	return (str);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%s\n", ft_strjoin(av[1], av[2]));
	return (0);
}
*/
// LFUN DYALI L3AJIBA KAT7SSAB LEN day 2 str fi da9a wehda

/*int   ft_strlen(char const *s1, char const *s2)
{
        int     i;
        int     len;

        len = 0;
        i = -1;
        while (s1[++i] || s2[i])
        {
                if ((s1[i] == '\0' || s2[i] == '\0') && len == 0)
                        len = i * 2;
                if (len != 0)
                        len++;
        }
        if (len)
                return (len);
        else
                (i * 2);
}*/
