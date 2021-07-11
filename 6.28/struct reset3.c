#incldue <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main() {
struct student s;
	scanf("%d", &s.number);
	getchar();
	gets(s.name);
	scanf("%s", &s.name);
	scanf("%lf", &s.grade);
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %lf\n", s.grade);
  
  return 0;

}

