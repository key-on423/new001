#include <stdio.h>
#include <string.h>
#include<time.h>//ʱ���ͷ�ļ�ʹ��
#include<stdlib.h>//�����ͷ�ļ�ʹ��
int main()
{
	char arr1[] = { "*************************" };
	char arr2[] = { "�����Ǹ��µĿ�ʼ,��������" };
	int left = 0;
	int sz = sizeof(arr1) - 1;
	int right = sz;
	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		printf("%s\n", arr1);
		Sleep(100);
		system("cls");
		right--;
		left++;
	}
	printf("%s\n", arr1);
	Sleep(500);
	system("cls");
	printf("����д��99�˷����\n");
	Sleep(800);
	system("cls");
	int x, y;
	for (x = 1;x <= 9;x++)
	{
		for (y = 1;y <= x;y++)
		{
			printf("%d*%d=%3d ", y, x, x * y);
		}
		printf("\n");
	}
	Sleep(500);
	system("cls");
	printf("Are you ready?\n");
	char arr3[10];
	int i = 0;
	while ((arr3[i] = getchar()) != '\n')
	{
		i++;
	}
	if (arr3[0] == 'y')
	{
		printf("good luck to you!\n");
	}
	else
		printf("wish you get ready tomorrow!\n");
	return 0;

}