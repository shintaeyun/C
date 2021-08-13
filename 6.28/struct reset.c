#incldue <stdio.h>

struct student {
	int number;
	char name[20];  
	double grade;
};

int main() {

struct student s1 = { 24, "Kim", 4.3 }; 
	printf("%d, %s, %lf", s1.number, s1.name, s1.grade);

return 0;
}
