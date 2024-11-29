#include <stdio.h>

int suma(int a, int b);
int resta(int a, int b);

int main(void)
{
	int x, y, z, w;
	printf("Ingrese primer numero: ");
	scanf("%d", &x);
	printf("Ingrese segundo numero: ");
	scanf("%d", &y);
	z=suma(x,y);
	w=resta(x,y);
	printf("La suma es %d ", z);
	printf("La resta es %d ", w);
}

int suma(int a, int b)
{
	int total;
	total=a+b;
	return total;
}

int resta(int a, int b)
{
	int total;
	total=a-b;
	return total;
}
