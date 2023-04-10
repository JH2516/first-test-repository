#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
int power = 1;
int status = 0
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
    printf("ㅡㅡㅡㅡㅡㅡㅡ-Exit game: ESC-ㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡPause: Pㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡControl with Arrowㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡBack to title? (Y/N)ㅡㅡ\n");
    return 0;
}
int print_game_screen()
{
    int height;
    int weight;
    printf("맵의 크기를 입력해 주세요\n");
    scanf_s("%d %d", &height, &weight);
    gotoxy(0, 0);
    for (int a = 0; i < weight+2; a++)
    {
        printf("ㅡ");
    }
    printf("\n");
    for (int i = 0; i < height; i++)
    {
        printf("ㅡ");
        for (int j = 0; j < weight; j++)
        {
            printf("  ");
        }
        printf("ㅡ\n");
    }
    for (int a = 0; i < weight+2; a++)
    {
        printf("ㅡ");
    }

    return 0;
}
int print_gameover_screen()
{
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡ                                    ㅡㅡ\n");
    printf("ㅡㅡ            ___________             ㅡㅡ\n");
    printf("ㅡㅡ            |GAME OVER|             ㅡㅡ\n");
    printf("ㅡㅡ            -----------             ㅡㅡ\n");
    printf("ㅡㅡ                                    ㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡTry again? (R)ㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡBack to title? (Y/N)ㅡㅡ\n");
    return 0;
}
int print_gamepause_screen()
{
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("ㅡㅡ                                    ㅡㅡ\n");
    printf("ㅡㅡ           ______________           ㅡㅡ\n");
    printf("ㅡ-            |GAME  PAUSED|            -ㅡ\n");
    printf("ㅡㅡ           --------------           ㅡㅡ\n");
    printf("ㅡㅡ                                    ㅡㅡ\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ-Back to game? (P)ㅡㅡ\n");
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
    char key = 0;
    print_title_screen();
    while (power)
    //메인 화면 시작, 고정
    {
        key = _getch();
        switch (key)
        {
        case 49:
        //게임 시작
            system("cls");
            print_game_screen();
            status = 1;
        case 50:
        //게임 설명
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
        //게임 랭킹
        case 27:
        //게임 끄기1
            power = false;
            break;
        case 52:
        //게임 끄기2
            power = false;
            break;
        default:
            continue;
        }
    }
    return 0;
}