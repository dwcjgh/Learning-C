/*习题4-11 兔子繁衍问题 (15 分)

一对兔子，从出生后第3个月起每个月都生一对兔子。小兔子长到第3个月后每个月又生一对兔子。
假如兔子都不死，请问第1个月出生的一对兔子，至少需要繁衍到第x个月时兔子总数才可以达到N对？
输入格式:
输入在一行中给出一个不超过10000的正整数N。
输出格式:
在一行中输出兔子总数达到N最少需要的月数x。*/

/*分析
 r	0	1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18	19	20
月1	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0
月2	2	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0
月3	3	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0
月4	4	2	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0
月5	5	3	2	1	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0
月6	6	4	3	2	2	1	1	1	0	0	0	0	0	0	0	0	0	0	0	0	0
月7	7	5	4	3	3	2	2	2	1	1	1	1	1	0	0	0	0	0	0	0	0			
月8	8	6	5	4	4	3	3	3	2	2	2	2	2	1	1	1	1	1	1	1	1	
					
月数		1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17		8		19		20		21		22		23		24	25	26	27	28	29	30
兔子对数	1	1	2	3	5	8	13	21	34	55	89	144	233	377	610	987	1597	2584	4181	6765	10946	17711																		
*/ 
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
//	printf("n = %d\n",n);	//调试 
	printf (" r	0	1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18	19	20	21	22\n");	
	int r = 0;//指向特定索引的兔子
	int rabbit[20000] = {1}; 
	int x = 1;//月数 
	int i;
	for( x = 2; r < n-1; x++){//时间推移 
//		printf("\n");	//调试 
		printf("月%d\t",x);
		for( i = 0; rabbit[i] != 0; i++){//生长 
			rabbit[i]++;
//			printf("月数x = %d\nrabbit[%d] = %d\n",x,i,rabbit[i]);	//调试 
			printf("%d\t",rabbit[i]);
		}
		int k;
		for(k = 0; rabbit[k] != 0; k++){//繁殖 
			if(rabbit[k] > 2){
//				printf("rabbit[%d] > 2，繁殖\n",k);	//调试 
				r++;
//				printf("r = %d\n",r);	//调试 
				rabbit[r] = 1;
//				printf("rabbit[%d] = %d\n",r,rabbit[r]);	//调试 
				printf("%d\t",rabbit[r]);
			}
			
		} 
		printf("<--x = %d",x);
		printf("\n");
	}
	printf("%d\n",x-1);
	if(r < 20000){
		return 0;
	}else{
		return 1;
	}
}

