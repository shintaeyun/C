#include <stdio.h>
#define MAX 30
int n, d[MAX];

int main()
{
        scanf("%d", &n);


        for (int i = 1; i <= n; i++)
            scanf("%d", &d[i]);


        int i = 2;
        while (i <= n)
        {
            int j = i;
            while (j >= 2 && d[j - 1] > d[j])
            {
                int t = d[j - 1];
                d[j - 1] = d[j];
                d[j] = t;
                j = j - 1;
            }
            i = i + 1;
        }


        for (int i = 1; i <= n; i++)
            printf("%d\n", d[i]);
    }
    return 0;
}
