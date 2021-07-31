#include <stdioh>

int main() {
  char pass[30];
	char* spass = &pass;
	int res1 = 0, res2 = 0, res3 = 0;
	printf("암호을 입력하세요 : ");
	gets(pass);
	for (int i = 0; i <= 19; i++)
	{
		if (*(spass + i) >= 'a' && *(spass + i) <= 'z')
		{
			res1 = 1;
		}
		if (*(spass + i) >= 'A' && *(spass + i) <= 'Z' >= 1)
		{
			res2 = 1;
		}
		if (*(spass + i) >= '0' && *(spass + i) <= '9' >= 1)
		{
			res3 = 1;
		}
	}
	if (res1 == 1 && res2 == 1 && res3 == 1 && strlen(pass) >= 6 && strlen(pass) <= 20)
	{
		printf("%s\n", pass);
	}
	else
	{
		printf("다시 만드세요\n");
	}
}
