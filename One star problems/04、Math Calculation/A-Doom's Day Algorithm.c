#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
    int n,i,month,day;
    char week[7][11]={{"Sunday"},{"Monday"},{"Tuesday"},{"Wednesday"},{"Thursday"},{"Friday"},{"Saturday"}};
    int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    scanf("%d",&n);
    while(n--)
    {
        int dayall=0;
        scanf("%d",&month);
        scanf("%d",&day);
        for(i=month;i>1;i--)
            dayall+=monthday[i-2];
        dayall+=day;
        printf("%s\n",week[(dayall-2)%7]);
    }
    
    return 0;
}
