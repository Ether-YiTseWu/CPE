#include <stdio.h>
#include <math.h>
int main(void)
{
    double s, a, ansArc, ansChord;
    double PI = acos(-1);   //The value of PI is the key point of this problem.
    char str[4];
    while(scanf("%lf %lf %s",&s,&a,str))
    {
        s = s + 6440;
        ansArc = s*a*(2*PI)/360;
        ansChord = 2*(s*sin(a/2*(2*PI)/360));
        if(str[0] == 'd')   //To express char, use '' instead of "".
            printf("%lf %lf\n",ansArc,ansChord);
        else if(str[0] == 'm')
            printf("%lf %lf\n",ansArc/60,2*(s*sin(a/2*(2*PI)/360/60)));
    }
    return 0;
}
