#include <stdio.h>

/*Fahr-Cels Table with Function */

float FahrToCels(float fahr);

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	
	while (fahr <= upper) {
		celsius = FahrToCels(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	
	return 0;
}

/*toCels function. Take in F, return C */

float FahrToCels(float fahr)
{
	float result;
	result = (5.0/9.0) * (fahr - 32.0);
	return result;
}