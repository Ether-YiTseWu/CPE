#include<stdio.h>

int main(void)
{
    int num = 1;
    while(num!=0)
    {
        scanf("%d",&num);
        if(num!=0)
        {
            if(num % 11 == 0)
                printf("%d is a multiple of 11.\n",num);
            else
                printf("%d is not a multiple of 11.\n",num);
        }
    }
    return 0;
}
