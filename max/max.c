int	max(int *tab, unsigned int len)
{
	unsigned int i;
	i = 0;
	int result;
	result = tab[0];
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}