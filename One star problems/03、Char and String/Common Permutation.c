#include <stdio.h> 
#include <stdlib.h>
#include<string.h>
int main(void)
{
    char a[1001]={0}, b[1001]={0},letter[26];
    for(int i=0;i<26;i++)
        letter[i]='a'+i;
    while(fgets(a,1000,stdin))
    {
        fgets(b,1000,stdin);
        int aLetter[26]={0},bLetter[26]={0};
        for(int i=0;i<strlen(a);i++)
        {
            for(int c=0 ; c<26 ; c++)
            {
                if(letter[c]==a[i])
                    aLetter[c]+=1;
            }
        }
        for(int i=0;i<strlen(b);i++)
        {
            for(int c=0 ; c<26 ; c++)
            {
                if(letter[c]==b[i])
                    bLetter[c]+=1;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(aLetter[i]!=0 && bLetter[i]!=0)
                printf("%c",letter[i]);
        }
        printf("\n");
    }
    return 0;
}
