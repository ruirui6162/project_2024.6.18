#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//////1,猜数字游戏
////void menu()
////{
////	printf("*********************************************************\n");
////	printf("******************  1.play  *****************************\n");
////	printf("******************  0.exit  *****************************\n"); 
////	printf("*********************************************************\n");
////}
////void game()
////{
////	//猜数字游戏的实现。
////	//1，生成随机数,rand返回一个从0到32767之间的数字。
////    int rannum1 = rand()%101;
////	//printf("%d\n", rannum1);
////	int guess = 0;
////	int life = 6;
////	for(;life>=1;life--)
////	{
////		printf("The random number have occured.\n");
////		printf("You still have %d chance.Please enter the number that you guessed(1-100):",life);
////		scanf("%d", &guess);
////		
////		if (guess == rannum1)
////		{
////			printf("Congratulations!You have guessed it!\a\n");
////			Sleep(3000);
////			system("cls");
////			break;
////
////		}
////		else if (guess > rannum1)
////		{
////			printf("Sorry,you are wrong.The number that you guessed is bigger than random number.Please guess it again after 3 seconds.\n");
////			Sleep(3000);
////			system("cls");
////		}
////		else
////		{
////			printf("Sorry,you are wrong.The number that you guessed is smaller than random number.Please guess it again after 3 seconds.\n");
////			Sleep(3000);
////			system("cls");
////		}
////	}
////	if (life == 0)
////	{
////		printf("You don't have any chance.Game is over!");
////	}
////}
////int a = 0;
////
////int main()
////{
////	srand((unsigned int)time(NULL));//用单目操作符（）进行强制类型转化。
////
////	do
////	{
////        menu();
////		printf("please enter 1 to continue or 0 to exit\n");
////		scanf("%d", &a);
////		system("cls");
////		switch (a)
////		{
////		case 1:
////			printf("   Welcome to this game!   \n");
////			game();
////			break;
////		case 0:
////			printf("You have exited this game.\n");
////			break;
////		default:
////			printf("Error,please enter it again\n");
////			break;
////		}
////	} while (a);
////	return 0;
////}
