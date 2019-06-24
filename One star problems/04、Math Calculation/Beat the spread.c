#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,sum,m;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&sum,&m);
        if(sum<0 || m<0 || m>sum)
            printf("impossible");
        else
            printf("%d %d",(sum+m)/2, sum-(sum+m)/2);
        printf("\n");
    }
    return 0;
}
