#include <stdio.h>

/* print Fahrenheit-Celsius table, floating point version */

main()

{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	printf("Conversion Table\n");
	printf("%3s %6s\n", "Fahr", "Celsius");
	while(fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}