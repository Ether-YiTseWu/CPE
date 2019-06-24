#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a, b;
    while(1)
    {
        int times=0;
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)
            break;
        for(int i=a;i<=b;i++)
        {
            for(int j=1;j<100000;j++)
            {
                if( i==j*j )
                    times++;
            }
        }
        printf("%d\n",times);
    }
    return 0;
}


