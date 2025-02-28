//====<[ ft_strcat: ]>==========================================================
char	*ft_strcat(char *dst, char *src)
{
	int	i;

	i = -1;
	while (dst[++i])
		;
	while (*src)
		dst[i++] = *(src++);
	dst[i] = 0;
	return (dst);
}
