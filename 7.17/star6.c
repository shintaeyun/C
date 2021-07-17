#include <stdio.h>

int main() {
  int j;
	for (int i = 5; i >= 1; i--) 
	{
		for (j = 5; j > i; j--) {
			printf(" ");
		}
		for ( j = 1; j < i*2; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
