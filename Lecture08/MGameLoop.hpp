#pragma once//#define _IS_THIS_HEADER_INCLUDED
#define KEY_ESC 27
#define KEY_LEFT 'a'
#define KEY_RIGHT 'b'
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
void gotoxy(int x, int y) {
	//x, y 좌표 설정
	COORD pos = { x,y };
	//커서 이동
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
			gotoxy(3, 15);
			isGameRunning = true;
			std::cout << ANSI_COLOR_RESET"초기화 완료" << std::endl;
		}
		void Release()
		{
			std::cout << "시스템 해제 완료" << std::endl;
		}
		void Update()
		{
			std::cout << ANSI_COLOR_RESET"업데이트 완료" << std::endl;
			if (_kbhit())
			{
				KeyEvent(_getch());
			}
		}
		void Render()
		{
			gotoxy(3, 17);
			std::cout << ANSI_COLOR_RESET"렌더링 완료" << std::endl;
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
				//한번 ESC누르면 일시정지, 그 상황에서 나가기 선택하면 나가짐
			case KEY_ESC:
				isGameRunning = false;
				break;
			case KEY_LEFT:
				gotoxy(5, 5);
				std::cout << ANSI_COLOR_RED"좌측 눌림" << std::endl;
				break;
			case KEY_RIGHT:
				gotoxy(5, 5);
				std::cout << ANSI_COLOR_GREEN"우측 눌림" << std::endl;
				isGameRunning = false;
				break;
			case KEY_ENTER:
				gotoxy(5, 5);
				std::cout << ANSI_COLOR_BLUE"엔터 눌림" << std::endl;
				isGameRunning = false;
				break;
			default:
				isGameRunning = true;
				break;
			}
		}
	};
}