#include <stdio.h>
/* 
	冒泡排序: 
	1.每次比较相邻的两个元素,大的放右边
	2.循环每次从第一位开始,最后一位不算
	3.每次内层循环的次数-1(最后一位最大,无需进行比较) 
*/ 
int BubbleSort(int bs[], int len)
{
	int i, j;
	printf("未排序前的数组: "); 
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
	printf("\n排序后的数组: "); 
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
