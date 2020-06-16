#include<windows.h>
#pragma warning(disable:4996) 
#include<stdlib.h>
#include<time.h>
#define TRY_COUNT 5
void Menu()
{
	printf("##################################\n");
	printf("#####1.start          2.quit######\n");
	printf("Please inter your choose 1 or 2\n");
}
void Game()
{
	srand((unsigned int)time(NULL));
	int data = rand() % 100 + 1;
	int count = TRY_COUNT;
	printf("*-------------      游  戏  开  始       -------------*\n");
	printf("规则：计算机会随机生成[1,100]中任意一个数字，请猜出来，快来试试吧！\n（注意：你只有五次机会！）\n");
	while (count>0)
	{
		printf("please inter your guess:\n");
		int num = 0;
		scanf("%d", &num);
		if (num > data){
			printf("猜大了！\n");
			count--;
			printf("你还有%d次机会\n", count);

		}
		else if (num < data){
			printf("猜小了!\n");
			count--;
			printf("你还有%d次机会\n", count);
		}
		else{
			printf("猜对了！\n");
			break;
		}
	}
	printf("*-------------      游  戏  结  束       -------------*\n");
}
int main()
{
	int quit = 0;
	while (quit != 1)
	{
		Menu();
		int choose = 0;
		scanf("%d", &choose);
		switch (choose){
		case(1) :
			Game();
			printf("要不要再来一次？\n");
			break;

		case(2) :
			quit = 1;
			printf("Game end!\n");
			break;
		}

	}
	system("pause");
	return 0;
}