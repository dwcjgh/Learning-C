#include <stdio.h>//三种方法求最大公约数measure.c 
int main()
{
	int a,b,t;

	printf("求两个数的最大公约数，请输入这两个数：");
	scanf("%d %d",&a,&b);
	t = measurez(a,b);
	printf("\n由辗转相除法得到最大公约数%d\n",t);
	t = measureg(a,b);
	printf("\n由更相减损术得到最大公约数%d\n",measureg(a,b));
	t = measureq(a,b);
	printf("\n由穷举法得到最大公约数%d\n",measureq(a,b));
	
	return 0;
}

int measurez(int x, int y)//辗转相除法 
{	
	int z = y;
	while( x % y != 0)
	{
		z = x % y;
		x = y;
		y = z;
	}
	return z;
}

int measureg(int a,int b)//更相减损术 
{		
	while(a != b)
	{
		if( a > b )
		{
			a = a - b;
		}
		else 
		{
			b = b - a;
		}
	}
	return a;
}

int measureq(int x,int y)//穷举法 
{
   	int temp = 0;
    for(temp = x ; ; temp-- )
    {
		if( x % temp == 0 && y % temp==0) 
	   		break; 
   	}
	return temp;
}
