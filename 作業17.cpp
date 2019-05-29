#include <iostream>

#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s[5]={0};
	int y=0,min;
	printf("-----尋找最小值-----\n");
	printf("連續輸入五個數值\n");
	for (y=0;y<5;y++)
	{
		printf("輸入第%d個資料:",y+1);
		scanf("%d",&s[y]);
	}
	min=s[0];
	for(y=0;y<5;y++)
	{
		if(min>s[y])
		{
			min=s[y];
		}
	}
	printf("最小值:%d\n\n",min);
	system("pause");
	return 0;
}
