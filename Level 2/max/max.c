int max( int *tab, unsigned int len)
{
	int result;
	int i = 0;
	result = tab[i];
	
	while(i < len)
	{
		if (result <  tab[i])
			result = tab[i];
		i++;
	}
	return result;
}
