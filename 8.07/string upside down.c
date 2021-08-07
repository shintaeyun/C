#include <stdio.h>
#include <stdlib.h>

char sreverse(char *sarr, int num) {
	for (int i = 0; i < num / 2; i++)
	{
		char temp = sarr[i];			//char temp = *(sarr + i);
		sarr[i] = sarr[num - 1 - i];	//*(sarr + i) = *(sarr + num - i - 1);
		sarr[num - 1 - i] = temp;		//*(sarr + num - i - 1) = temp;
	}
}
 
int main() {
  
  char* sarr;
	sarr = (char*)malloc(100);
	strcpy(sarr, "this is example. ");
	printf("\n\n%s\n", sarr);
	sreverse(sarr, strlen(sarr));
	printf("%s\n", sarr);
	free(sarr);
  
}
