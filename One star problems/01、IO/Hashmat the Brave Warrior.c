#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i, n;
    while(scanf("%d %d",&i,&n)!=EOF)
    {
        if(i>n)
            printf("%d\n",i-n);
        else if (i<n)
            printf("%d\n",n-i);
        else
            printf("0\n");
    }
    return 0;
}

 *我的最爱::C++ For iOS - Free  https://itunes.apple.com/app/id1016322367?mt=8
其它资料:http://uuu9u.com
