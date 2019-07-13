#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int coefficient[10000000];	//將係數定義為全域變數，是個聰明的方法，這樣微分函式和main函式都能使用

int d(int x,int max)		//好像不一定要寫這個Fuction，這裡只是為了分開寫繪比較清晰吧
{
	long long sum=0,exp=1;
	int i;
	for(i=max-1;i>=0;i--)	//i初始化成max-1的原因：因Array最後一項是常數項，本項微分後必等於零，不必進行SUM的累加
	{
    	sum+=coefficient[i]*(max-i)*exp; //i=max-1時的coefficient[i]是X^1的係數，微分後相當於X^0=1。此時的max-i等於1，表微分後將係數乘1，
    	exp = exp*x;		//exp表x的平方數
    }
	return sum;
}

int main(void)
{
    int x,i;
    while(scanf("%d",&x)!=EOF)
    {
        for(i=0;;i++)
        {
        	scanf("%d",&coefficient[i]);	//本題題目要求方程式係數間須打空號，故利用scanf將每個係數值存入[i]中
            if(getchar()=='\n')				//逐一讀取字元，讀到'\n'時斷開for loop
                break;
        }
    	printf("%d\n",d(x,i));				//套用Function解出應變數後將值輸出
    }
    return 0;
}
