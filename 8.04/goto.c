#include <stdio.h>

int main() {
  
  int num = 5;
	if (num == 1) goto ONE;
	else if (num == 2) goto TWO;
	else goto FINSH;

	ONE: printf("1\n");
		goto FINSH;
	TWO: printf("2\n");
		goto FINSH;
	FINSH: printf("FINSH\n");
}
