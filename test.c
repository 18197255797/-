#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include"Contact.h"

void menu()
{
	printf("*********1.add*******2.search*************\n");
	printf("*********3.del*******4.clear**************\n");
	printf("*********5.show******6.sot****************\n");
	printf("*********0.exit*******7.destroy********************\n");

}


void start()
{
	int input = 0;
	//初始化通讯录 数组usedSize

	Contact con;
	InitContact(&con);//
	do
	{
		menu();
		printf("请输入你的操作>>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			break;
        case SEARCH:
			break;
		case DEL:
			break;
		case CLEAR:
			break;
		case SHOW:
	        break;
		case EXIT:
			break;
		case DES:
			break;
     
		}
	} while (input)
}


int main()
{
	start();
	return 0;






}