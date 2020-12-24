/* SWAPPING OF 2 NOS. WITHOUT USING THIRD TEMP VARIABLE */
#include<stdio.h>

void main()
{
	int first=10,second=15;
	printf("Values before swapping are First=%d and Second=%d\n", first, second);
	first= first + second;
	second= first-second;
	first= first - second;
	printf("values after swapping are First=%d and Second=%d", first, second);
}
