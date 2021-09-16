#include <stdio.h>

int main() {
  char number[15];  
	printf("입력 : ");
	gets(number);
	if (number[7] == '1' || number[7] == '3')
		printf("출력 : 남자");
	else if (number[7] == '2' || number[7] == '4')
		printf("출력 : 여자");
	else
		printf("유효하지 않음");
 return 0;  
}
