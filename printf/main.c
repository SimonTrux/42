
#include "ft_printf.h"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	printf("Hello printf\n");
	ft_printf("test 01\n");
	ft_printf("test 02 %i\n", 5);
	return (0);
}
