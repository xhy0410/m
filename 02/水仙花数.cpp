#include<stdio.h>
int main(void)
{
	int i,a,b,c;
	for(i=100;i<1000;i++)
	{
		a=i/100;//��λ 
		b=i/10%10;//ʮλ
		c=i%10;//��λ
		if(a*100+b*10+c==a*a*a+b*b*b+c*c*c)
			printf("%-5d",i); 
	}
	return 0;
}
