// mini-FSysten.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "pch.h"
#include "Fcommand.h"

using namespace std;

int main()
{
	char op1[OP_LEN];
	char op2[OP_LEN];
	char op3[OP_LEN];
	char sTime[20] = { 0 };
	__int64 ftime = time(NULL) + 8 * 3600;
	tm* pTime;
	pTime = gmtime(&ftime);
	strftime(sTime, 20, "%Y-%m-%d %H:%M:%S", pTime);
	printf("Welcome to Common MFS!\n\nSystem time: UTC+8 %s\n", sTime);
	//cout << current_time() << endl << sizeof(FCB) << endl;
	printf("\nGet help, please enter help!\n");
	//printf("\n\nIf you are familiar with the operation of this system, please ignore the second sentence!\n\n\n");
	printf("\nEnter the command character to operate, enter \"close\" to close system.\n");
	while (true)
	{
		cout << "Mini_FS ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		cout << current_path;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "> ";
		if ((input(op1, op2, op3) == -1))
			continue;
		if (strcmp(op1, "close") == 0)
			break;
		judge(op1, op2, op3);
	}
	if (sys_mounted)
	{
		fclose(fp);
	}
	printf("Thank you for using COMMON Mini_File_System!\n");
}
