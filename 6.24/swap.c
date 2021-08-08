#incldue <stdio.h>

void swap(int* a, int* b, int* c)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}


int main() {
int a = 100, b = 200, c = 300;
	printf("swap 함수 전 a = %d, b = %d, c = %d\n", a, b, c);
	swap(&a, &b, &c);
	printf("swap 함수 후 a = %d, b = %d, c = %d\n", a, b, c);
return 0;
}
