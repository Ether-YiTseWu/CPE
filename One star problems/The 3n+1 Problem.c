#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b, i, j, count=0,temp=0, cal;
    while(scanf("%d",&a)!=EOF && scanf("%d",&b)!=EOF)
    {
        i=a>b?a:b;
        j=a>b?b:a;
        for(int k=j;k<=i;k++)
        {
            cal=k;
            count = 0;
            while(cal!=1)
            {
                if(cal%2 == 0)
                {
                    cal=cal/2;
                }
                else if(cal%2 == 1)
                {
                    cal=cal*3+1;
                }
                count++;
            }
            if(temp<count)
                temp=count;
        }
        printf("%d %d %d\n",a,b,temp+1);
        temp=0;
    }
    return 0;
}
