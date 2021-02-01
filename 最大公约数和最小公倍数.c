/*最大公约数和最小公倍数

两个给定正整数的最大公约数和最小公倍数。
输入格式:
输入在一行中给出两个正整数M和N（≤1000）。
输出格式:
在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。*/
#include <stdio.h>
int measurez(int x,int y);
int multiple(int m, int n);
int main()
{
	int m,n;
	scanf("%d %d",&m ,&n);
	int ma,mi;
	ma = measurez(m,n);
	
	mi = multiple(m,n);
	
	
	printf("%d %d\n",ma,mi);
	return 0;
}

int measurez(int x, int y)	//辗转相除法 
{							// x    y    z
	int z = y;				//252  105  105
	while( x % y != 0)		//252 和 105 不是倍数关系 
	{						//
		z = x % y;			//252  105	 42		
		x = y;				//105  105   42
		y = z;				//105  42    42
	}
	return z;
}

int multiple(int m, int n)
{
	/*我们纸上怎么求最小公倍数的？ 
	511		  1022	        1533		2044	m	i
	292	584	876	1168	1460	1752	2044	n	j
	*/
//	if(m < n){//我们把大的值写在上面 
//		int t;
//		t = m;
//		m = n;
//		n = t;
//		printf("将数字调换为了%d %d\n",m,n);
//	}
	int M = m;//备份好值 
	int N = n;
	int i,j;
	for(i = 1; n != m; i++){
		m = M * i;
//		printf("%d倍乘变为%d\n",M,m);
		for(j =1; n < m; j++){
			n = N * j;
//			printf("%d倍乘变为%d\n",N,n);
		}
		
	}
//	printf("最大公约数为%d\n",m);
	return m; 
}
