// Magic_tower.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <graphics.h>
#include <Windows.h>
#include <stdlib.h>
#include <mmsystem.h>
#include <conio.h>
#pragma comment(lib,"winmm.lib")

using namespace std;

#define WINDOWSWIDTH        830          //游戏窗口宽度
#define WINDOWSHEIGHT       680          //游戏窗口高度
#define INFORMATIONWIDTH    140          //信息框宽度
#define INFORMATIONHEIGHT   660          //信息框高度
#define GAP                 10           //间隙像素
#define SIZE                60           //一张图片的像素
#define STAGE               5            //最高层数
#define NUM                 11           //每行或每列图片的个数
void Welcome();

int main()
{
	Welcome();
}

//游戏欢迎界面
void Welcome()
{
	char con;

	initgraph(WINDOWSWIDTH, WINDOWSHEIGHT);

	//输出魔塔
	settextstyle(150, 150, _T("楷体"));
	settextcolor(RED);
	outtextxy(120, 100, _T("魔塔"));

	//输出按回车键开始游戏
	settextstyle(40, 40, _T("黑体"));
	settextcolor(WHITE);
	outtextxy(90, 450, _T("按回车键开始游戏"));

	//输出作者
	settextstyle(16, 16, _T("宋体"));
	outtextxy(500, 630, _T("作者:Sky is bright."));

	//如果按了回车就开始游戏
	while (1)
	{
		con = _getch();

		if (con == 13)
			break;
	}

	cleardevice();
	settextstyle(16, 8, _T("黑体"));
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
