#include <stdio.h>

int main() {  
    int a, b;
    scanf("%d %d", &a, &b);
    const int* pa = &a;

    //*pa = 3;    //X
    pa = &b;    //O
    printf("%d", *pa);
}
