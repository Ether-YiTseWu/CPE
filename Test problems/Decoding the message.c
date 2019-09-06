#include <stdio.h>
#include <string.h>
int main(void)
{
    int T;
    char str[101][31];
    scanf("%d ",&T);
    for (int i = 1; i <= T ; i++)
    {
        int times = 0;
        for(int j = 0; ; j++)
        {
            fgets(str[j],31,stdin);
            times ++;
            if (str[j][0]=='\n')
                break;
        }
        printf("Case #%d:\n",i);
        for(int k = 0 ; k<times ; k++)
        {
            printf("%c",str[k][0]);
            int sequence = 2;
            for(int kk = 0; kk < strlen(str[k]) ; kk++)
            {
                int vocabularyNum = 0;
                if (str[k][kk] == ' ')            // Count the word number of this vocabulary.
                    for(int check = kk+1 ; str[k][check] != ' ' ; check ++)
                        vocabularyNum++;
                if (vocabularyNum >= sequence)  // Check the word number of this vocabulary is enough to decode(bigger than the 'sequence).
                    printf("%c",str[k][kk+sequence]), sequence++;;
            }
            printf("\n");
        }
    }
    return 0;
}
