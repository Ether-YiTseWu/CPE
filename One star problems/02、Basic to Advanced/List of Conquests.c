#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmpfunc (const void * a, const void * b) // The function which qsort need.
{
    return (  *(int*)b - *(int*)a );
}
int main(void)
{
    int n,i,j,k=0;
    scanf("%d",&n);
    char country[n][2000], name[76][2000];

    for(i=0;i<n;i++)
    {
        scanf("%s",country[i]);
        fgets(name[i],2000,stdin);
    }

    qsort(country,n,2000,cmpfunc);  // (array name,array number,array size,compare function)

    int num = 1;
    for(i=0;i<n;i++)
    {
        if( strcmp(country[i],country[i+1])==0 )
            num++;
        else
            printf("%s %d\n",country[i],num),num=1;
    }
    return 0;
}
