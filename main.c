#include <stdio.h>

double pi (void);

int main(void){
	
	printf("Valor de Pi: %f\n",pi());
}

double pi(void) {

	double valor_pi, a;

	for (int i = 0; i <= 100 ; i++) {
		
		if (i%2 == 0){

			pi += 4/(2*i+1);
		}

		else{

			pi -= 4(2*i+1);
		}

		valor_pi = 4/i + 4/a;

		printf("%lf\n",valor_pi);
	}
	