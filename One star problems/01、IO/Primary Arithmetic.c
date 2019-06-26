#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    do

        char x[11]={0} , y[11]={0};
        int count = 0, a, b,temp = 0;
        double number=0;

        scanf("%d %d",&a,&b);

        for(int i=10 ; i>=0 ;i--)

             x[i]=( a%(int)pow(10.0,number+1.0) ) / (int)pow(10.0,number);
             y[i]=( b%(int)pow(10.0,number+1.0) ) / (int)pow(10.0,number);
             number++;
             printf("%-5d %-5d\n",x[i],y[i]);
            if( (x[i]+y[i]+temp) >= 10 )

                count+=1;
                temp = 1;

            if(  (x[i]+y[i]+temp) < 10 )

                temp = 0;


        if(count == 0)
            printf("No carry operation.\n");
        else
            printf("%d carry operation.\n",count);

    while(x != 0 && y != 0)

    return 0;
}
