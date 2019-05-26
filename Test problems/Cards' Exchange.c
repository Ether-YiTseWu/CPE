#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a,b;
    while(1)
    {
        scanf("%d %d",&a,&b);
        int arr1[a],arr2[b],ans1=0,ans2=0,ans=0;

        if(a==0 && b==0)
            break;

        for(int i = 0;i < a;i++)
        {
            scanf("%d",&arr1[i]);
            if(i>0 && arr1[i]==arr1[i-1])
                arr1[i-1]=0;
        }
        for(int i = 0;i < b;i++)
        {
            scanf("%d",&arr2[i]);
            if(i>0 && arr2[i]==arr2[i-1])
                arr2[i-1]=0;
        }

        for(int i = 0, j = 0;i < a && j < b;)
        {
            if(arr1[i]==arr2[j])
            {
                arr1[i] = 0;
                arr2[j] = 0;
                i++;
                j++;
            }
            else
            {
                if(arr1[i]>arr2[j])     //to achieve the terminate condition
                    j++;
                else
                    i++;
            }
        }

        for(int i = 0;i<a;i++)
            if(arr1[i]!=0)
                ans1++;
        for(int i = 0;i<b;i++)
            if(arr2[i]!=0)
                ans2++;
        if(ans1<ans2)
            ans = ans1;
        else if(ans2<ans1)
            ans = ans2;
        else
            ans = ans1;
        printf("%d\n",ans);
    }

    return 0;
}
