include <stdio.h>
include <time.h>

int main() {

  srand(time(NULL));
	  int random, a = 0, b = 0;
	  for (int i = 0; i < 100; i++)
	  {
		  random = rand() % 2;
		  if (random != 1) // 0이 앞면, 1이 뒷면
			  a++;
		  else
			  b++;
	  }
	  printf("앞면 : %d, 뒷면 : %d\n", a, b);
  }
