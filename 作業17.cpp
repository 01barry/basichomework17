#include <iostream>

#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s[5]={0};
	int y=0,min;
	printf("-----�M��̤p��-----\n");
	printf("�s���J���Ӽƭ�\n");
	for (y=0;y<5;y++)
	{
		printf("��J��%d�Ӹ��:",y+1);
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
	printf("�̤p��:%d\n\n",min);
	system("pause");
	return 0;
}
