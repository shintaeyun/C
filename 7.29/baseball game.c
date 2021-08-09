#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int ai[3];
	int use[3];
	int strike = 0, out = 0, ball = 0;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 3; i++)
	{
		ai[i] = rand() % 9 + 1;
		for (int j = 0; j < i; j++) 
		{
			if (ai[i] == ai[j])
			{
				break;
			}
		}
	}
	while (1)
	{
		printf("숫자 3개를 입력하세요 (1 ~ 9) : ");
		scanf("%d %d %d",&use[0], &use[1], &use[2]);
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if ((use[i] == ai[j]) && i == j)
				{
					strike++;
				}
				else if (use[i] != ai[j])
				{
					out++;
				}
				else if ((use[i] == ai[j]) && i != j)
				{
					ball++;
				}

			}
		}
		if (strike == 3)
		{
			printf("%d strike\n", strike);
			break;
		}
		else if (strike < 3 && strike > 0)
		{
			printf("%d strike\n", strike);
		}
		if (ball == 3)
		{
			printf("3 ball\n");
		}
		else if (ball < 3 && ball > 0)
		{
			printf("%d ball\n", ball);
		}
		if (out == 3)
		{
			printf("3 out\n");
		}
		else if (out < 3 && out > 0)
		{
			printf("%d out\n", out);
		}
	}
} 
