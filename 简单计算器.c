/*简单计算器.c

模拟简单运算器的工作。假设计算器只能进行加减乘除运算，运算数和结果都是整数，
四种运算符的优先级相同，按从左到右的顺序计算。
输入格式:

输入在一行中给出一个四则运算算式，没有空格，且至少有一个操作数。遇等号”=”说明输入结束。
输出格式:

在一行中输出算式的运算结果，或者如果除法分母为0或有非法运算符，则输出错误信息“ERROR”。*/
#include <stdio.h>
int main()
{
	int a,c;
	char b;
//	printf("原理\n'+' = %d\n'-' = %d\n'*' = %d\n'/' = %d\n'=' = %d\n",'+','-','*','/','=');
	printf("本计算器从左到右的顺序计算，不优先计算乘除\n输入界面：\n");
	scanf("%d %c",&a,&b);
	printf("计算过程：\n");
	while(1){
		switch(b){
			case 43:{
				scanf("%d",&c);
				printf("%d + %d = %d\n",a,c,a+c);
				a = a + c;
				break;
			}
			case 45:{
				scanf("%d",&c);
				printf("%d - %d = %d\n",a,c,a-c);
				a = a - c;
				break;
			}
			case 42:{
				scanf("%d",&c);
				printf("%d * %d = %d\n",a,c,a*c);
				a = a * c;
				break;
			}
			case 47:{
				scanf("%d",&c);
				if( c == 0){
					printf("%d - %d = ERROR\n",a,c);
					printf("ERROR\n");
					return 0;
				}
				printf("%d / %d = %d\n",a,c,a/c);
				a = a / c;
				break;
			}
			case 61:{
				printf("%d = %d\n",a,a);
				printf("计算结果：\n%d\n",a);
				return 0;
			}	
			default:{
				printf("请继续输入：\n");
				break;
			}
			
		}
		scanf("%c",&b);
	}
	return 0;
}


