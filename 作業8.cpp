#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int qqq,QQQ,integer;
	
	printf("請輸入數字:\n");
	scanf("%d",&integer);
	printf("這個範圍的質數有:\n");
	
	for(qqq=2;qqq<=integer;qqq++)
	{
		for(QQQ=2;QQQ<=qqq;QQQ++)
		{
			if(qqq%QQQ==0)
				break;
		}
		if(qqq==QQQ)
			printf("%5d",qqq);
	}
	
	system("pause");
	return 0;
}
