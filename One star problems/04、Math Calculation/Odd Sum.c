#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int S,n,i;
    scanf("%d",&S);
    while(S--)
    {
        float p,probability,temp;
        scanf("%d %f %i",&n,&p,&i);
        temp=pow((1.0-p),i-1.0);
        temp*=p;
        probability=temp* ( 1.0/( 1.0-pow(1-p,n) ) );
        printf("%.4f\n",probability);
    }
    return 0;
}
