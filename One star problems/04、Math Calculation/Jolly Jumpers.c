#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
    int n,temp,set[3001],results[3001];
    
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&set[i]);
            
        for(int i=0;i<n-1;i++)
        {
            temp = set[i+1]-set[i];
            if(temp<0)
                results[i]=-temp;
            else
                results[i]=temp;
        }
        
        for(int i=0;i<n;i++) //bubble sort
        {
            for(int j=i+1;j<n-1;j++)
            {
                if(results[i]>results[j])
                {
                    temp=results[i];
                    results[i]=results[j];
                    results[j]=temp;
                }
            }
        }
        temp=0;
        for(int i=0;i<n-1;i++) //confirm the gap==1
        {
            //printf("%d\n",results[i]);
            if(results[i+1]-results[i]==1)
                temp++;
        }
        if(temp==(n-2)&&results[0]==1)
            printf("Jolly\n");
        else
            printf("Not jolly");
    }
    return 0;
}
