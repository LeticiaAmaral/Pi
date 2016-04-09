#include <stdio.h>

double pi (void);

int main(void){
	
	printf("Valor de Pi: %f\n",pi());
}

double pi(void) {

	int i;
	double valor_pi = 0.0;

	for (i = 1; i <= 100 ; i++) {
		
		if (i % 2 == 0) {

			valor_pi = valor_pi - (4.0 / (2 * i - 1));
		}

		else {

			valor_pi = valor_pi + (4.0 / (2 * i - 1));
		}

		printf("%f\t",valor_pi);
	}

	return valor_pi;
}