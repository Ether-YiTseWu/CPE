#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char str[100][101];
    int n,seq=0,max=0;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%s",str[seq]);        //不能用fgets，一定要用scanf，否則倒轉會出錯，這是因為fgets會記錄\n??

        if(strlen(str[seq])>max)
            max=strlen(str[seq]);    //紀錄最長的字串是什麼
        seq++;
    }

    for(int i=0;i<seq;i++)           //用來補足空白的loop，一旦發現有字串小於最大字串，便用空白補足它，使之到最長字串為止
    {
        for(int j=strlen(str[i]);j<max;j++)
        {
            str[i][j]=' ';
        }
    }

    printf("\n");

    for(int j=0;j<max;j++)           //最後將陣列從下到上、從左到右將字串儲存的字元印出來
    {
        for(int i=seq-1;i>=0;i--)
            printf("%c",str[i][j]);
        printf("\n");
    }

    return 0;
}
