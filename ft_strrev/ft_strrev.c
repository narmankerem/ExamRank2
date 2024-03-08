char	*ft_strrev(char *str)
{
	int i;
	int len;
	len = 0;
	i = -1;
	char tmp;
	while (str[len])
		len++;
	while (++i < len / 2) // kerem  -> merek
	{
		tmp = str[len - 1 - i];
		str[len - 1 - i] = str[i];
		str[i] = tmp;
	}

	return (str);
}