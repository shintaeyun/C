#include <stdio.h>

struct student
{
	int num;
	char name[20];
	char sex[6];
};

int main() {

  struct student s1 = { 1501, "홍길동", "남" };
  
  return 0;
}
