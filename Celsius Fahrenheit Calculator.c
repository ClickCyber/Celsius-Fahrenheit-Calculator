#include <stdio.h>

int Celsius(float iteam_first);
int Fahrenheit(float iteam_first);

int main() {
		float first_iteam;
		char Opertator;
		printf("Enter Opertator C or F\n");
		scanf("%c",&Opertator);
		switch (Opertator) {

			case 'F':
				printf("Enter Number\n");
				scanf("%f", &first_iteam);
				Fahrenheit(first_iteam);
				break;
			case 'C':
				printf("Enter Number\n");
				scanf("%f", &first_iteam);
				Celsius(first_iteam);
				break;

			default:
				printf("Operator is not valid\n");
				return 1;
	}
	return 0;
}

int Celsius(float iteam_first) {
	printf("Value is %.2f\n", (iteam_first * 1.8) + 32);
	return 0;
}
int Fahrenheit(float iteam_first) {
	printf("Value is %.2f\n", (iteam_first - 32) / 1.8);
	return 0;
}