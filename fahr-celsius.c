#include <stdio.h>

#define 	LOWER 	0
#define 	UPPER	300
#define		STEP 	20
int main()
{

/* 
	This program will output a table of Celsius and Fahrenheit equivalents
	C = 5/9 (F - 32)

*/


	int fahr, cels;
	int bottom, top, step; 

	fahr = bottom;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + 20) {

		printf("%d\t%d\n", fahr, 5 * (fahr - 32) / 9);

	}


}
