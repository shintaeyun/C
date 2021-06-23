#include <stdio.h>

int main() 
{ 
  char ch;
	printf("input char >> ");
	while (1) {
		ch = getchar();
		if (ch == '\n')
			break;
		if (ch >= 'a' && ch <= 'z')
			ch = ch - 32;
		printf("%c", ch);
	}
  return 0;
}
