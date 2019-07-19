#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
    int n,x,y,num=0;
    scanf("%d",&n);
    while(n--)
    {
         int ans=0;
         scanf("%d %d",&x,&y);
         for(int i=x;i<=y;i++)
         {
             if(i%2==1)
                 ans+=i;
         }
         num++;
         printf("Case %d: %d",num,ans);
    }
    return 0;
}

