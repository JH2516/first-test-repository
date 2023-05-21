#pragma once//#define _IS_THIS_HEADER_INCLUDED
#define KEY_ESC 27
#define KEY_LEFT 'a'
#define KEY_RIGHT 'd'
#define KEY_ENTER 13
#include<iostream>
#include <conio.h>
#include<Windows.h>
#define ANSI_COLOR_RED      "\x1b[31m"
#define ANSI_COLOR_GREEN    "\x1b[32m"
#define ANSI_COLOR_YELLOW   "\x1b[33m"
#define ANSI_COLOR_BLUE     "\x1b[34m"
#define ANSI_COLOR_MAGENTA  "\x1b[35m"
#define ANSI_COLOR_CYAN     "\x1b[36m"
#define ANSI_COLOR_RESET    "\x1b[0m"
void gOtOxy(int x, int y) {
	//x, y ��ǥ ����
	COORD pos = { x,y };
	//Ŀ�� �̵�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
namespace MuSoeun {
	class MGameLoop {
	public : 
		bool isGameRunning = false;
		MGameLoop() {};
		~MGameLoop() {};
		void Initialize()
		{
			isGameRunning = true;
			gOtOxy(3, 15);
			std::cout << ANSI_COLOR_RESET"�ʱ�ȭ �Ϸ�" << std::endl;
		}
		void Release()
		{
			gOtOxy(3, 16);
			std::cout << ANSI_COLOR_RESET"�ý��� ���� �Ϸ�" << std::endl;
		}
		void Update()
		{
			gOtOxy(3, 17);
			std::cout << ANSI_COLOR_RESET"������Ʈ �Ϸ�" << std::endl;
			if (_kbhit())
			{
				KeyEvent(_getch());
			}
		}
		void Render()
		{
			gOtOxy(3, 18);
			std::cout << ANSI_COLOR_RESET"������ �Ϸ�" << std::endl;
		}
		void Run()
		{
			Initialize();
			while (isGameRunning)
			{
				Update();
				Render();
			}
			Release();
		}
		void KeyEvent(char KeyInput)
		{
			switch (KeyInput)
			{
				int a, b;
				//�ѹ� ESC������ �Ͻ�����, �� ��Ȳ���� ������ �����ϸ� ������
			case KEY_ESC:
				if (_kbhit() == 12)
				{
					isGameRunning = false;
				}
				break;
			case KEY_LEFT:
				gOtOxy(5, 5);
				std::cout << ANSI_COLOR_RED"���� ����" << std::endl;
				break;
			case KEY_RIGHT:
				gOtOxy(5, 5);
				std::cout << ANSI_COLOR_GREEN"���� ����" << std::endl;
				break;
			case KEY_ENTER:
				gOtOxy(5, 5);
				std::cout << ANSI_COLOR_BLUE"���� ����" << std::endl;
				break;
			default:
				gOtOxy(2, 5);
				break;
			}
		}
	};
}