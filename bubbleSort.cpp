#include <stdio.h>
/* 
	ð������: 
	1.ÿ�αȽ����ڵ�����Ԫ��,��ķ��ұ�
	2.ѭ��ÿ�δӵ�һλ��ʼ,���һλ����
	3.ÿ���ڲ�ѭ���Ĵ���-1(���һλ���,������бȽ�) 
*/ 
int BubbleSort(int bs[], int len)
{
	int i, j;
	printf("δ����ǰ������: "); 
	for(i = 0;i < len ;i++)
		printf("%d ", bs[i]);
	for(i = 0;i < len;i ++ )
	{
		for(j = 0;j < len-i-1;j ++)	
		{
			if(bs[j] > bs[j+1])
			{
				bs[j] += bs[j+1];
				bs[j+1] = bs[j] - bs[j+1];
				bs[j] = bs[j] - bs[j+1];
				
			}
		}
	}
	printf("\n����������: "); 
	for(i = 0;i < len ;i++)
		printf("%d ", bs[i]);
}
int main()
{
	int bs[10] = {10, 9, 4, 5, 2, 3, 1, 8, 7, 0};
	int lenth;
	lenth = sizeof(bs) / sizeof(*bs);
	printf("lenth = %d\n",lenth); 
	BubbleSort(bs, lenth);
	return 0;
}
