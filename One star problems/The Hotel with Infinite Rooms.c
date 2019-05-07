#include <stdio.h>
int main(void)
{
    int S;
    long long int D;
    while(scanf("%d %lld",&S,&D)!=EOF)
    {
        int temp=0;
        while(1)
        {
            temp+=S;
            if(D<=temp)
            {
                printf("%d\n",S);
                break;
            }
            S++;
        }
    }
    return 0;
}
