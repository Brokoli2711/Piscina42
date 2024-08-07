#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	int counter=122;
	
	while(counter >= 97)
	{
		write(1, &counter, 1);
		counter--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
