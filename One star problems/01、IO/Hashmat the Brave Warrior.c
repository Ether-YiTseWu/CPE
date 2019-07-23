#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n, n2, i ,j , temp ,temp2;
    scanf("%d",&n);

    while(n--)
    {
            scanf("%d",&n2);
        int houseAddress[500]={0};
            for(i = 0;i<n2;i++)
            {
                scanf("%d",&temp);
                houseAddress[i] = temp;
            }

            for(i=0;i<n2;i++)
            {
                for(j=i+1;j<n2;j++)
                {
                    if(houseAddress[i]<houseAddress[j])
                    {
                         temp2 = houseAddress[i];
                         houseAddress[i]=houseAddress[j];
                         houseAddress[j]=temp2;
                    }
                }
            }
            n2 = (n2/2);
            printf("path : %d\n",houseAddress[1]);
    }
    return 0;
}
