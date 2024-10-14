#include <stdio.h>
#include<algorithm>

int i,j,temp;
void sort(int a[],int n) 
{
    for (i = 0; i < n - 1; i++) 
	{
        for (j = 0; j < n - i - 1; j++) 
		{
            if (a[j] > a[j + 1]) 
			{
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int N;
    scanf("%d", &N);
    int a[N];

    for (int i = 0; i < N; i++) 
	{
        scanf("%d", &a[i]);
    }

    sort(a, N);

    for (int i = 0; i < N; i++) 
	{
        printf("%d", a[i]);
        if (i < N - 1) 
		{
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

