#include <stdio.h> 

void wordlist(char *str) {
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122) 
		{
			str[i] = str[i] - 32;
		}
		printf("%c", str[i]);
		if (str[i] == ' ')
		{ 
			printf("\n");
		}
	}
}	

int main() {

  char str[30];
	printf("Enter Sentence : ");
	gets(str);
	wordlist(str);
}  
  
