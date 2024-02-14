#include <stdio.h>
int main() {
	for (int i = 1;i <= 5;i++) {
		for (int j = 5;j >= i;j--) {
			if (i == 2 && j == 4 || i == 2 && j == 3) {
				printf("  ");
			}
			else if (i == 3 && j == 4) {
				printf("  ");
			}
			else
				printf("* ");
		}
		printf("\n");
	}
}