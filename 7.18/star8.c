#Inlcude <stdio.h>

int main() {
  
  int  chi1 = 64;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			printf("%-3c", ++chi1);
		}
		printf("\n");
	}
}
