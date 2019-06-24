#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmpfunc (const void * a, const void * b) //qsort 需要的比較函式
{
    return (  *(int*)b - *(int*)a );
}
int main(void)
{
    int n,i,j,k=0;
    char temparray[76][2000],ans[76][2000];

    scanf("%d",&n);
    char array[n][2000];
    for(i=0;i<n;i++)
    {
        scanf("%s",array[i]);
        fgets(temparray[i],2000,stdin);
    }
    qsort(array,sizeof(array)/sizeof(array[0]),sizeof(*array),cmpfunc);

    for(i=0;i<n;i++)
    {
        int num =0,temp =0;
        while(strcmp(array[i],array[i+temp]) == 0)  //don't write array[i]==array[i+temp]
        {
            num+=1;
            temp+=1;
        }
        printf("%s %d\n",array[i],num);
        i+=num-1;
    }

    return 0;
}
