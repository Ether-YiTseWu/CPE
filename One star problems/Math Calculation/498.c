#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int coefficient[10000000];	//�N�Y�Ʃw�q�������ܼơA�O���o������k�A�o�˷L���禡�Mmain�禡����ϥ�

int d(int x,int max)		//�n�����@�w�n�g�o��Fuction�A�o�̥u�O���F���}�gø����M���a
{
	long long sum=0,exp=1;
	int i;
	for(i=max-1;i>=0;i--)	//i��l�Ʀ�max-1����]�G�]Array�̫�@���O�`�ƶ��A�����L���ᥲ����s�A�����i��SUM���֥[
	{
    	sum+=coefficient[i]*(max-i)*exp; //i=max-1�ɪ�coefficient[i]�OX^1���Y�ơA�L����۷��X^0=1�C���ɪ�max-i����1�A��L����N�Y�ƭ�1�A
    	exp = exp*x;		//exp��x�������
    }
	return sum;
}

int main(void)
{
    int x,i;
    while(scanf("%d",&x)!=EOF)
    {
        for(i=0;;i++)
        {
        	scanf("%d",&coefficient[i]);	//���D�D�حn�D��{���Y�ƶ������Ÿ��A�G�Q��scanf�N�C�ӫY�ƭȦs�J[i]��
            if(getchar()=='\n')				//�v�@Ū���r���AŪ��'\n'���_�}for loop
                break;
        }
    	printf("%d\n",d(x,i));				//�M��Function�ѥX���ܼƫ�N�ȿ�X
    }
    return 0;
}
