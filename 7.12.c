#include <stdio.h>
#define MAX 30
int n, d[MAX];


int main()
{
    
    scanf("%d", &n);


    for (int i = 1; i <= n; i++)
        scanf("%d", &d[i]);


    for (int i = 1; i < n; i++)
    {
        int m = i;
        for (int j = i + 1; j <= n; j++)
            if (d[m] > d[j])
                m = j;


        int t = d[i];
        d[i] = d[m];
        d[m] = t;
    }

    for (int i = 1; i <= n; i++)
        printf("%d\n", d[i]);
return 0;
}
