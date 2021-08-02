#include <stdio.h> 

int main() {
  int arr[] = { 3, 5, 1, 7, 49, 26, 8, 11, 90, 99 };
	int n;
	scanf("%d", &n);
	for (int i = 0; i < sizeof(int); i++)
	{
		if (arr[i] == n)
		{
			printf("%d번 방에서 %d찾았습니다.\n", i, n);
			break;
		}
		else
		{
			printf("찾지 못했습니다.\n");
			break;

		}
	}
}
