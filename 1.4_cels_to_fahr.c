#include <stdio.h>

/* print Fahrenheit-Celsius table, floating point version */

main()

{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = -30;
	upper = 200;
	step = 20;
	
	celsius = lower;
	printf("Conversion Table\n");
	printf("%3s %6s\n", "Celsius", "Fahr");
	while(celsius <= upper) {
		fahr = ( (9.0/5.0) * celsius ) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}