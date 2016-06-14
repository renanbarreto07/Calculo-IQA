#include <stdio.h>
#include <math.h>

int main(void){
	double q8, h;

	scanf("%lf", &h);
	if(h>500){
		q8=30;
	}
	else{
		q8= 133.17* (pow(2.7182818, (-0.0027 * h))) -53.17* (pow(2.7182818 , (-0.0141 * h))) + ((-6.2*(pow(2.7182818, (-0.00462*h)))) *sin(0.0146*h));

	}
	printf("%f\n", q8);
return 0;
}
