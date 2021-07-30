#include <stdio.h>
#define MAX_SIZE 5
#pragma warning(disable: 4996)

int stack[MAX_SIZE];
int top = -1;
int bottom = 0;

int IsEmpty() {
	if (top < 0)
		return 1;
	else
		return 0;
}

int pop() {
	if (IsEmpty() == 1)
		printf("stack is empty\n");
	else
		return stack[top--];
}

int IsFull() {
	if (top >= MAX_SIZE - 1)
		return 1;
	else
		return 0;
}

int push(int num) {
	if (IsFull() == 1)
		printf("stack is full\n");
	else
	stack[++top] = num;
	
}

int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	for (int i = 0; i< 5; i++)
	printf("%d\n", pop());
}

