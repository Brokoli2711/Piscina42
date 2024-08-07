#include <unistd.h>

void ft_print_alphabet(void)
{
	int number = 97;
	
	while(number <= 122)
	{
		write(1, &number, 1);
		number++;
	}
}

int main(void)
{
	ft_print_alphabet();
}
