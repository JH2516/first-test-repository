#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <ctime>
int power = 1;
int status = 0;
int height;
int width;
int rx;
//랜덤값x
int ry;
//랜덤값y
void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    width = x; height = y;
}
//아래건 랜덤 x위치 반환
int randompx(int x)
{
    rx = (rand() % x + 1);
    return rx;
}
//이건 랜덤 y위치 반환
int randompy(int y)
{
    rx = (rand() % y + 1);
    return ry;
}
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
int print_game_screen(int width, int height)
{
    int* sph;
    int count = 0;
    int l;
    int j;
    printf("맵의 크기를 입력해 주세요\n");
    scanf_s("%d %d", &height, &width);
    printf("%d %d 크기입니다\n", height, width);
    sph = (int*)malloc(3 * sizeof(char));
    for (int i = 0; i < 3; i++)
    {
        sph[i] = '*';
    }
    for (int i = 0; i < width + 2; i++)
    {
        printf("ㅡ");
    }
    printf("\n");
    for (int i = 0; i < height; i++)
    {
        printf("ㅡ");
        for (j = 0; j < width; j++)
        {
            if (i == 4 && j == 4)
            {
                for (l = 0; l < 3; l++)
                {
                    printf("%c", sph[l]);
                }
                int a = width - (j + l);
                for (int m = 0; m < a; m++)
                {
                    printf("  ");
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("ㅡ\n");
    }
    for (int i = 0; i < width + 2; i++)
    {
        printf("ㅡ");
    }
    printf("\n");
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
            gotoxy(0, 0);
            print_game_screen(width, height);
            status = 1;
            break;
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