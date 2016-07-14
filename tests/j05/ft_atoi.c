
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	printf("1 => %d\n",ft_atoi("- 1")); //return 0
	printf("2 => %d\n",ft_atoi(" +3")); //return 3
	printf("3 => %d\n",ft_atoi(" 0006")); //return 6
	printf("4 => %d\n",ft_atoi("8-2")); //return 8
	printf("5 => %d\n",ft_atoi("  12t54]")); //return 12
	printf("6 => %d\n",ft_atoi("[1")); //return 0
	printf("7 => %d\n",ft_atoi("")); //return 0
	printf("8 => %d\n",ft_atoi(" ")); //return 0
	printf("9 => %d\n",ft_atoi("+2147483647")); //return 2147483647
	printf("10 => %d\n",ft_atoi("-2147483648")); //return -2147483648

	printf("1 => %d\n",atoi("- 1")); //return 0
	printf("2 => %d\n",atoi(" +3")); //return 3
	printf("3 => %d\n",atoi(" 0006")); //return 6
	printf("4 => %d\n",atoi("8-2")); //return 8
	printf("5 => %d\n",atoi("  12t54]")); //return 12
	printf("6 => %d\n",atoi("[1")); //return 0
	printf("7 => %d\n",atoi("")); //return 0
	printf("8 => %d\n",atoi(" ")); //return 0
	printf("9 => %d\n",atoi("+2147483647")); //return 2147483647
	printf("10 => %d\n",atoi("-2147483648")); //return -2147483648
	return 0;
}