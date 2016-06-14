#include <stdio.h>
#include <math.h>

int main(void){
	double q9, i;

	scanf("%lf", &i);
	if(i>15){
		q9=9;
	}
	else if(i<=5){
		q9=1;
	}
	else{
		q9=1/(0.0003869*pow(i + 0.1815, 2) + 0.01081);
	}
	printf("%f\n", q9);
return 0;
}
