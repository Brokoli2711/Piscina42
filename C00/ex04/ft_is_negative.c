#include <unistd.h>

void ft_is_negative(int *n)
{
	char answer='P';
	if(n == NULL)
	{
		write(1, &answer, 1);
		return;
	}
	if(n < 0)
	{
		answer='N';
	}
	write(1, &answer, 1);
}

int main(void)
{
	ft_is_negative(3);
	ft_is_negative(NULL);
	ft_is_negative(-3);
	return(0);
}
