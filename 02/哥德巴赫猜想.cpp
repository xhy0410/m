#include <stdio.h>
#include <stdbool.h>

#define MAX 10000 // ���������ֵ

// �ж�һ�����Ƿ�Ϊ����
bool is_prime(int num) 
{
    if (num <= 1) 
	return false;
    for (int i = 2; i * i <= num; i++) 
	{
        if (num % i == 0) 
		return false;
    }
    return true;
}

// ��֤��°ͺղ���
void goldbach_conjecture(int j) 
{
    bool found = false;
    int a = 0, b = 0;

    for (int i = 2; i <= j / 2; i++) 
	{
        if (is_prime(i) && is_prime(j - i)) 
		{
            a = i;
            b = j - i;
            found = true;
            break; 
        }
    }

    if (a != 0) 
	{
        printf("%d = %d + %d\n", j, a, b);
    } 
	else
	{
        printf("û���ҵ����������������ֽ⡣\n");
    }
}

int main() 
{
    int N;

    printf("������һ��ż�� N: ");
    scanf("%d", &N);

    // ��֤ N �Ƿ�Ϊż���Ҵ���4
    if (N <= 4 || N % 2 != 0) 
	{
        printf("������һ������4��ż����\n");
        return 1;
    }

   // ��֤��4��N��Χ�ڵ�����ż��
    for (int even_num = 4; even_num <= N; even_num += 2) 
	{
        goldbach_conjecture(even_num);
    }

    return 0;
}


