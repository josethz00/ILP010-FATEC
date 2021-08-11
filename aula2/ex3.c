#include <stdio.h>
#include <math.h>
#define PI 3.14159
 
int main() {
	float raio, area;
	printf("Digite o raio em metros: "); 
	scanf("%f", &raio);
	area = PI * (pow(raio, 2));
	printf("Área: %.2f m² \n", area);
 
	return 0;
}