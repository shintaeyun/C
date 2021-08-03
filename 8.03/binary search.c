#include <stdio.h> 

int main() {

int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n, left = 0, mid = 0, right = sizeof(arr)/sizeof(int) - 1;
	scanf("%d", &n);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (n == arr[mid])
		{
			printf("%d방에서 %d 찾았습니다.\n", mid, n);
			break;
		}
		else if (n > arr[mid])
		{
			left = mid + 1;
		}
		else if (n < arr[mid])
		{
			right = mid - 1;
		}
	}
	if (left > right)
		printf("값을 찾지 못했습니다.\n");
}
