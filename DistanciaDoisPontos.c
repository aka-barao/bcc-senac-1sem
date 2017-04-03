#include <stdio.h>
#include <math.h>

int main(void){
	double x1,y1,x2,y2,distancia,calculo;
	scanf("%lf %lf",&x1,&y1);
	scanf("%lf %lf",&x2,&y2);
	calculo = ((x2 - x1)*(x2 - x1)) + ((y2 - y1) * (y2 - y1));
	distancia = sqrt(calculo);
	printf("%.4f\n",distancia);
	return 0;
}
