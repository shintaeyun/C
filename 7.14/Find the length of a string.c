#include <stdio.h>
#include <string.h>

int	strLen(char *ptr) {
	int len = 0;
	while (ptr[len] != '\0')
		len++;
	return len;
}

int main() {
  
	int len;
	char str[50] = "this is test.";
	printf("\n문자열 길이 : %d, %d\n", strLen(str), strlen(str));
	
	  return 0;
}
