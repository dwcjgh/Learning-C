#include <stdio.h>// 寻找水仙花数
#include <math.h>
int main()
{
	int n, max, min;
	int i = 0, I, a, j, s = 0;

	scanf("%d",&n);//3位数

	min = pow(10.0,n-1);//100
	max = pow(10.0,n)-1;//999
									//缩进为测试代码
									//printf("遍历min=%d,max=%d\n",min,max);

	for(i = min; i <= max; i++){//遍历所有三位数 尝试100到999
	I = i;//备份正在尝试的数字
									//printf("尝试I=%d\n",I);
		for(j = 1; j <= n; j++ ){//拆出每一位数字，执行n次
			a = I % 10;//取个位数
									//printf("取出它的最后一位%d\n",a);
			s += pow(1.0*a,n);//计算他的水仙花值
			I = I / 10;//去掉最后一位
		}
									//printf("%d的水仙花值是%d\n",i,s);
		if( s == i ){//判定它是否是水仙花数
			printf("%d\n",i);
									//printf("所以%d是水仙花数\n____\n",i);
		}
		s = 0;
	}
	return 0;
}
