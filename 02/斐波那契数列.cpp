#include <stdio.h>

// ����쳲����������е� a �����ĺ���
int fibonacci(int a) 
{
    if (a == 1 || a == 2) 
	{
        return 1;
    }
    int prev = 1, curr = 1, next;
    for (int i = 3; i <= a; i++) 
	{
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() 
{
    int n;
    printf("����������n:");
    scanf("%d", &n);  // ��ȡ�������ݵ�����

    int a[n];  // �洢ÿ����������е������� a
    printf("ÿ������һ��������a(1<=a<=30):\n");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);  // ��ȡÿ����������е������� a
    }

    // ���쳲����������ж�Ӧ�ĵ� a �����Ĵ�С
    printf("쳲����������е�a������\n"); 
    for (int i = 0; i < n; i++) 
	{
        printf("%d\n", fibonacci(a[i]));
    }

    return 0;
}
