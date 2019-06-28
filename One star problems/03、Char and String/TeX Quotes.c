#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=1;
    char c;

    while( (c=getchar()) )
    {
        if(c=='"' && i%2==1)
        {
             printf("?");
             i++;
        }
        else if(c=='"' && i%2==0)
        {
            printf("~");
            i++;
        }
        else
            putchar(c);
    }
    return 0;
}
