#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char n[11];
    while(scanf("%s",n) != EOF && n[0]!='0')
    {
        while(strlen(n)!=1)
        {
            int i =0,F=0;
            for(i=0;i<strlen(n);i++)
                F+=(n[i]-'0');
            memset(n,'\0',11);
            sprintf(n,"%d",F);  //把F的內容以%d的格式存入n字串中
        }
        printf("%s\n",n);
    }
    return 0;
}

