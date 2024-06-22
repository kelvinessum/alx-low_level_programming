#include <stdio.h>
/**
 *main - print two two -digit numbers
 *
 *results - Always Success
 */


int main() {
	int i, j;

	for (i = 0; i <= 99; ++i) {
		for (j = i; j <= 99; ++j) {
			// Calculate the tens and ones digits for i
			int i_tens = i / 10;
			int i_ones = i % 10;

			// Calculate the tens and ones digits for j
			int j_tens = j / 10;
			int j_ones = j % 10;

			// Output the combination in the required format
			// Using putchar to print each digit individually

			// Print tens digit of i (first number)
			putchar('0' + i_tens);

			// Print ones digit of i (first number)
			putchar('0' + i_ones);

			// Print space
			putchar(' ');

			// Print tens digit of j (second number)
			putchar('0' + j_tens);

			// Print ones digit of j (second number)
			putchar('0' + j_ones);

			// If this is not the last combination, print ", "
			if (!(i == 99 && j == 99)) {
				putchar(',');
				putchar(' ');
			}
		}
	}

	// End of program
	return 0;
}
