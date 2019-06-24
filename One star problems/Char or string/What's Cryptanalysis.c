#include <stdio.h>
int main(void)
{
    int n,count[26]={0},temp=0,f,max=0;
    char letter[26],tempC;
    scanf("%d",&n);

    for(int i=0;i<26;i++)
    {
        letter[i]='a'+i;
    }
    n=n+1;
    while(n--)
    {
        char array[100]={0};

        fgets(array,100,stdin);
        for(int j=0;j<100;j++)
        {
            for(int k=0;k<26;k++)
            {
                if(letter[k]==array[j] || letter[k]==array[j]+32)
                    count[k]++;
            }
        }
    }
    for(int i=1;i<26;i++)
    {
        if(count[max]<count[i])
            max=i;
    }
    for(f=count[max];f>0;f--)
    {
        for(tempC='A';tempC<='Z';tempC++)
        {
            if(count[tempC-65]==f)
                printf("%c %d\n",tempC,f);
        }
    }
    return 0;
}
