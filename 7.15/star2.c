#Inlcude <stdio.h>

int main() {
  for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j <i; j++) 
		{
			printf(" ");
			
		}
		for (int k =0 ; k < 5-i; k++) 
		{
			printf("*");
		}
		printf("\n");
	}
  
