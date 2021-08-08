#include <stdio.h> 

int main() {
  
  char colors[5][7] = { "Red","Green", "Yellew", "Black", "Pink" };
	char sw[7];
	int a;
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 4; i++) {
			a = strcmp(colors[i], colors[i + 1]);
			if (a == 1) {
				strcpy(sw, colors[i + 1]);
				strcpy(colors[i + 1], colors[i]);
				strcpy(colors[i], sw);
			}
		}
	}
	for (int i = 0; i < 5; i++)
		printf("%s\n", colors[i]);
  
  return 0;
}
