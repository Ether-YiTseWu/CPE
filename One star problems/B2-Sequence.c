#include <stdio.h>
int main(void)
{
	int n,seq=0,cer;

	while(scanf("%d",&n)!=EOF)
	{
		int num[n],evenOdd=0,ans=0;

		for(int i=0;i<n;i++)
			scanf("%d",&num[i]);

		if(n%2==1)
			evenOdd = 1;

		int note[n/2+evenOdd];

		for(int i=0;i<n/2+evenOdd;i++)
		{
            cer=n-(i+1);
            note[i]=num[i]+num[cer];
		}

		for(int i=0;i<n/2+evenOdd;i++)
		{
			for(int j=i+1;j<n/2+evenOdd;j++)
			{
				if(note[i]==note[j])
					ans=1;
			}
		}
		seq++;
		if(ans==0)
			printf("Case #%d It is a B2-Sequence\n",seq);
		else if(ans==1)
			printf("Case #%d It is not a B2-Sequence\n",seq);
	}
	return 0;
}
