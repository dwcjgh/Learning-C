//求e的近似值
#include <stdio.h>
int fact(int a)
{
	 double b = 1.;
	 double k;
	
	for(k = 1.; k <= a; k++){
		b *= k;
	}
	printf("%d的阶乘是%.0f\n",a,b);
	return b;
}
int main()
{
	int n,i;
	double sum = 1;
	
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		printf("第%d项是1/%d!\n",i+1,i);
		sum += 1.0/fact(i);
		printf("估算出e的泰勒展开前%d项是%.8lf\n\n",i+1,sum);
	}
	printf("%.8lf\n",sum);
	
	return 0;
} 
