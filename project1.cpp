#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <chrono>
#include <mmsystem.h>
#include <conio.h>
using namespace std;
int main()
{
	char c;
	int m, n1,n2;
	system("Color 70");
	do
	{
		printf("==========={-Welcome to the calculator-}==========\n");
		printf("1 = +\n");
		printf("2 = -\n");
		printf("3 = *\n");
		printf("4 = /\n");
		printf("5 = %%\n");
		scanf("%d", &m);
		if (m == 1)
		{
			printf("Enter number 1: \n");
			scanf("%d", &n1);
			printf("Enter number 2: \n");
			scanf("%d", &n2);
			printf("Result = %d", n1 + n2);
			
		}
		else if (m == 2)
		{
			printf("Enter number 1: \n");
			scanf("%d", &n1);
			printf("Enter number 2: \n");
			scanf("%d", &n2);
			printf("Result = %d", n1 - n2);
		}
		else if (m == 3)
		{
			printf("Enter number 1: \n");
			scanf("%d", &n1);
			printf("Enter number 2: \n");
			scanf("%d", &n2);
			printf("Result = %d", n1 * n2);
		}
		else if (m == 4)
		{
			printf("Enter number 1: \n");
			scanf("%d", &n1);
			printf("Enter number 2: \n");
			scanf("%d", &n2);
			printf("Result = %d", n1 / n2);
		}
		else if (m == 5)
		{
			printf("Enter number 1: \n");
			scanf("%d", &n1);
			printf("Enter number 2: \n");
			scanf("%d", &n2);
			printf("Result = %d", n1 % n2);
		}
		else
		{
			printf("Please choose number from 1 to 5\n");
		}
		printf("\nDo you want to close the program Y/N\n>>");
		c = _getche();
	} while (c == 'n' && 'N');
	printf("Program will close after 5s");
	Sleep(5000);
	//system("pause");
}
