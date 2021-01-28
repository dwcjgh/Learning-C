#include <stdio.h>计算a的阶乘 .c
int fact(int a)//
{
	double b = 1;
	double k;
	
	for(k = 1; k <= a; k++){
		b *= k;
	}
	printf("阶乘计算的结果是：\n%d的阶乘是%.0lf",a,b);
	return b;
}

int main()
{
	int a;
	double b;
	printf("求几的阶乘呢？：");
	scanf("%d",&a);
	b = fact(a);
	
	return 0;
}
 
