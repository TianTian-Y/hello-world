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
	printf("*-------------      ��  Ϸ  ��  ʼ       -------------*\n");
	printf("���򣺼�������������[1,100]������һ�����֣���³������������԰ɣ�\n��ע�⣺��ֻ����λ��ᣡ��\n");
	while (count>0)
	{
		printf("please inter your guess:\n");
		int num = 0;
		scanf("%d", &num);
		if (num > data){
			printf("�´��ˣ�\n");
			count--;
			printf("�㻹��%d�λ���\n", count);

		}
		else if (num < data){
			printf("��С��!\n");
			count--;
			printf("�㻹��%d�λ���\n", count);
		}
		else{
			printf("�¶��ˣ�\n");
			break;
		}
	}
	printf("*-------------      ��  Ϸ  ��  ��       -------------*\n");
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
			printf("Ҫ��Ҫ����һ�Σ�\n");
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