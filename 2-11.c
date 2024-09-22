#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s;
	scanf("%f%f%f",&a,&b,&c);
	s=1.0/2*a*b*sin(3.14/180*c);
	printf("%.2f\n",s);
	return 0;

}