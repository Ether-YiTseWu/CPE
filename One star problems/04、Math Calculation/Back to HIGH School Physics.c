#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int v, t, displacement;
    while(scanf("%d %d",&v,&t)!=EOF)
    {
        displacement = 2*v*t;
        printf("%d\n",displacement);
    }
    return 0;
}
