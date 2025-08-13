#include <stdio.h>

int main() {
	float l, b, area, perimeter;

	printf("Enter length of rectangle: ");
	scanf("%f", &l);

	printf("Enter width of rectangle: ");
	scanf("%f", &b);

	area = l * b;
	perimeter = 2 * (l + b);
	
	printf("Area = %f \n" , area);
	printf("Perimeter = %f \n", perimeter);


	return 0;
}