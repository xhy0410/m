#include <stdio.h>

// 计算斐波那契数列中第 a 个数的函数
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
    printf("请输入组数n:");
    scanf("%d", &n);  // 读取测试数据的组数

    int a[n];  // 存储每组测试数据中的正整数 a
    printf("每组输入一个正整数a(1<=a<=30):\n");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);  // 读取每组测试数据中的正整数 a
    }

    // 输出斐波那契数列中对应的第 a 个数的大小
    printf("斐波那契数列中第a个数：\n"); 
    for (int i = 0; i < n; i++) 
	{
        printf("%d\n", fibonacci(a[i]));
    }

    return 0;
}
