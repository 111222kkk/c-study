#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu() {
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
}

void game()
{
	int guess = 0;
	int num = rand()%100+1;//生成随机数
	while (1) 
	{
		printf("猜数字：");
		scanf("%d", &guess);
		if (guess < num)
		{
			printf("猜小了\n");
		}
		else if (guess > num)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误,重新输入\n");
			break;
		}
	} 
	while (input);
	return 0;
}