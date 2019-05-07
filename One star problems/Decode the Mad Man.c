#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char str[1000];
    char a[4][14]={"`1234567890-=","qwertyuiop[]","asdfghjkl;'","zxcvbnm,."};

    int x,y;
    fgets(str,1000,stdin);

    for(int i = 0;i <strlen(str)-1;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=2;k<14;k++)
            {
                if(str[i]==a[j][k] || str[i]+32==a[j][k])
                    x=j,y=k;
            }
        }
        if(str[i]!=32)
            printf("%c",a[x][y-2]);
        else
            printf(" ");
    }

    return 0;
}


