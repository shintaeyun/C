#incldue <stdio.h>

int main() {
  
  int plus = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%-3d", ++plus);
		}
		printf("\n");
	}
}
