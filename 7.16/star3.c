#include <stdio.h>

int main() {
  
  
for (int i = 0; i < 3; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int k = 0; k < 3; k++) {
		for (int a = 1; a <= 3 - k; a++) {
			printf("*");
		}
		printf("\n");
	}
}
