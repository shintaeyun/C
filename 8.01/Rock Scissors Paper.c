#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
  int use, ai;
	srand((unsigned)time(NULL));
	printf("0.가위 1.바위 2.보\n");
	scanf("%d", &use);
	ai = rand() % 3;
	printf("%d %d\n", use, ai);
	if (ai == use)
	{
		printf("무승부\n");
	}
	else if (((use == 0) && (ai == 2)) || ((use == 1) && (ai == 0)) || ((use == 2) && (ai == 1)))
	{
		printf("이겼습니다.\n");
	}
	else
	{
		printf("졌습니다.\n");
	}
}
