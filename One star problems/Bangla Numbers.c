#include <stdio.h>
void bangla(long long int a)
{
    long long int number[5]={a/10000000,a%10000000/100000,a%100000/1000,a%1000/100,a%100};
    char str[4][6]={"kuti","lakh","hajar","shata"};
    for(int i=0;i<4;i++)
    {
        if(number[i]==0)
            continue;
        printf("%lld %s ",number[i],str[i]);
    }
    printf("%d ",number[4]);
}
int main(void)
{
    long long int x=0,count=0;
    long long int a=0, b=0;
    while(scanf("%lld",&x) != EOF)
    {
        count++;
        a=x % 10000000;
        b=x / 10000000;
        printf("%d. ",count);
        if(x>1000000000)
        {
            bangla(b);
            if(b%100!=0)
                printf("kuti ");
            bangla(a);
        }
        else
            bangla(x);
        printf("\n");
    }
    return 0;
}
