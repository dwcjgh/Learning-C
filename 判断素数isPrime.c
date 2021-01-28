int isPrime(int a)//穷举法检验一个数是否为素数 
{
	int k;
	if(a < 2){
		return 0;
	}
	for(k=2; k<a; k++){
		if(a % k == 0){
			return 0;
		}
	}
	return 1;
} 
#include <stdio.h>
int main()
{
	int b;
	printf("请输入待检测的素数：") ; 
	scanf("%d",&b);
	if(isPrime (b) == 0){
		printf("该数不是素数\n"); 
	}else{
		printf("该数是素数\n");
	}
}


