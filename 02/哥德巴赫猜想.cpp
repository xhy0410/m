#include <stdio.h>
#include <stdbool.h>

#define MAX 10000 // 设置最大数值

// 判断一个数是否为质数
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

// 验证哥德巴赫猜想
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
        printf("没有找到满足条件的质数分解。\n");
    }
}

int main() 
{
    int N;

    printf("请输入一个偶数 N: ");
    scanf("%d", &N);

    // 验证 N 是否为偶数且大于4
    if (N <= 4 || N % 2 != 0) 
	{
        printf("请输入一个大于4的偶数。\n");
        return 1;
    }

   // 验证从4到N范围内的所有偶数
    for (int even_num = 4; even_num <= N; even_num += 2) 
	{
        goldbach_conjecture(even_num);
    }

    return 0;
}


