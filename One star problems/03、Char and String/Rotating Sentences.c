#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char str[100][101];
    int n,seq=0,max=0;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%s",str[seq]);        //������fgets��һ��Ҫ��scanf����t���D�����e���@�����fgets��ӛ�\n??

        if(strlen(str[seq])>max)
            max=strlen(str[seq]);    //�o����L���ִ���ʲ�N
        seq++;
    }

    for(int i=0;i<seq;i++)           //�Á��a��հ׵�loop��һ���l�F���ִ�С�����ִ������ÿհ��a������ʹ֮�����L�ִ���ֹ
    {
        for(int j=strlen(str[i]);j<max;j++)
        {
            str[i][j]=' ';
        }
    }

    printf("\n");

    for(int j=0;j<max;j++)           //���ጢ��Џ��µ��ϡ������Ҍ��ִ��������Ԫӡ����
    {
        for(int i=seq-1;i>=0;i--)
            printf("%c",str[i][j]);
        printf("\n");
    }

    return 0;
}
