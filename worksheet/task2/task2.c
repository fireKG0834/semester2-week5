/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Darius Tomoiaga
 * ID: 201961292
 */

#include <stdio.h>
#include <string.h>

int main(void) {
	long decimal = 0;
	char hex[9];

	printf("Enter a hexadecimal:");
	scanf("%8s", hex);

	int len = strlen(hex);

	for (int i = 0; i < len; i++) {
		char c = hex[i];
		int digit;

		switch (c) {
			case '0': digit = 0;  break;
			case '1': digit = 1;  break;
			case '2': digit = 2;  break;
			case '3': digit = 3;  break;
			case '4': digit = 4;  break;
			case '5': digit = 5;  break;
			case '6': digit = 6;  break;
			case '7': digit = 7;  break;
			case '8': digit = 8;  break;
			case '9': digit = 9;  break;
			case 'A': case 'a': digit = 10; break;
			case 'B': case 'b': digit = 11; break;
			case 'C': case 'c': digit = 12; break;
			case 'D': case 'd': digit = 13; break;
			case 'E': case 'e': digit = 14; break;
			case 'F': case 'f': digit = 15; break;
			default:
				printf("Error: Invalid Hexadecimal\n");
				return 1;
		}

		decimal = decimal * 16 + digit;
	}

	printf("decimal: %ld\n", decimal);
	return 0;
}