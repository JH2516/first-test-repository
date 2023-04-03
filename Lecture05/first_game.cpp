#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//status = 0
int print_title_screen()
{
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡ토룡이  게임ㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡ(Snake Bite)ㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡ1. 게임 시작ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡ2. 게임 설명ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡ3. 게임 랭킹ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡESC.EXITㅡㅡㅡ\n");
    return 0;
}

//status = 2
int print_introduction_screen()
{
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡ토룡이  게임ㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡ(Snake Bite)ㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡ-Need any help?-ㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡNothing hereㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡBack to title? (Y/N)ㅡㅡ\n");
    return 0;
}
void gotoxy(int x, int y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{
    int status = 0;
    char key = 0;
    bool power = true;
    print_title_screen();
    while (power)
    {
        key = _getch();
        switch (key)
        {
        case 49:

        case 50:
            system("cls");
            print_introduction_screen();
            status = 2;
            while (true)
            {
                key = _getch();
                switch (key)
                {
                case 89:
                    system("cls");
                    print_title_screen();
                    status = 0;
                    break;
                case 121:
                    system("cls");
                    print_title_screen();
                    status = 0;
                    break;
                default:
                    continue;
                }
                break;
            }break;
        case 51:

        case 27:
            power = false;
            break;
        case 52:
            power = false;
            break;
        default:
            continue;
        }
    }
    
    return 0;
}