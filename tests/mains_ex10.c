/* Test ex10 */

#include <stdio.h>
int main()
{
	int a0 = 10;
	int b0 = 15;
	int c0 = 20;
	int d0 = 25;

	int *a1 = &a0;
	int **a2 = &a1;
	int ***a3 = &a2;

	int *b1 = &b0;

	int *c1 = &c0;
	int **c2 = &c1;
	int ***c3 = &c2;
	int ****c4 = &c3;
	int *****c5 = &c4;
	int ******c6 = &c5;
	int *******c7 = &c6;

	int *d1 = &d0;
	int **d2 = &d1;
	int ***d3 = &d2;
	int ****d4 = &d3;

	printf("(%d %d %d %d)\n", a0, b0, c0, d0);
	ft_scrambler(a3, b1, c7, d4);
	printf("(%d %d %d %d)\n", a0, b0, c0, d0);
}