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
//������x
int ry;
//������y
void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    width = x; height = y;
}
//�Ʒ��� ���� x��ġ ��ȯ
int randompx(int x)
{
    rx = (rand() % x + 1);
    return rx;
}
//�̰� ���� y��ġ ��ȯ
int randompy(int y)
{
    rx = (rand() % y + 1);
    return ry;
}
int print_title_screen()
{
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤѤ������  ���ӤѤѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤѤ�(Snake Bite)�ѤѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("�Ѥ�1. ���� ���ۤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("�Ѥ�2. ���� ����ѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("�Ѥ�3. ���� ��ŷ�ѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�ESC.EXIT�ѤѤ�\n");
    return 0;
}

//status = 2
int print_introduction_screen()
{
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤѤ������  ���ӤѤѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤѤ�(Snake Bite)�ѤѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤ�-Exit game: ESC-�ѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤѤѤ�Pause: P�ѤѤѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤ�Control with Arrow�ѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤѤѤѤ�Back to title? (Y/N)�Ѥ�\n");
    return 0;
}
int print_game_screen(int width, int height)
{
    int* sph;
    int count = 0;
    int l;
    int j;
    printf("���� ũ�⸦ �Է��� �ּ���\n");
    scanf_s("%d %d", &height, &width);
    printf("%d %d ũ���Դϴ�\n", height, width);
    sph = (int*)malloc(3 * sizeof(char));
    for (int i = 0; i < 3; i++)
    {
        sph[i] = '*';
    }
    for (int i = 0; i < width + 2; i++)
    {
        printf("��");
    }
    printf("\n");
    for (int i = 0; i < height; i++)
    {
        printf("��");
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
        printf("��\n");
    }
    for (int i = 0; i < width + 2; i++)
    {
        printf("��");
    }
    printf("\n");
    return 0;
}
int print_gameover_screen()
{
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("�Ѥ�                                    �Ѥ�\n");
    printf("�Ѥ�            ___________             �Ѥ�\n");
    printf("�Ѥ�            |GAME OVER|             �Ѥ�\n");
    printf("�Ѥ�            -----------             �Ѥ�\n");
    printf("�Ѥ�                                    �Ѥ�\n");
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤ�Try again? (R)�Ѥ�\n");
    printf("�ѤѤѤѤѤѤѤѤѤ�Back to title? (Y/N)�Ѥ�\n");
    return 0;
}
int print_gamepause_screen()
{
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("�Ѥ�                                    �Ѥ�\n");
    printf("�Ѥ�           ______________           �Ѥ�\n");
    printf("��-            |GAME  PAUSED|            -��\n");
    printf("�Ѥ�           --------------           �Ѥ�\n");
    printf("�Ѥ�                                    �Ѥ�\n");
    printf("�ѤѤѤѤѤѤѤѤѤѤ�-Back to game? (P)�Ѥ�\n");
    printf("�ѤѤѤѤѤѤѤѤѤ�Back to title? (Y/N)�Ѥ�\n");
    return 0;
}
int main()
{
    char key = 0;
    print_title_screen();
    while (power)
        //���� ȭ�� ����, ����
    {
        key = _getch();
        switch (key)
        {
        case 49:
            //���� ����
            system("cls");
            gotoxy(0, 0);
            print_game_screen(width, height);
            status = 1;
            break;
        case 50:
            //���� ����
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
            //���� ��ŷ
        case 27:
            //���� ����1
            power = false;
            break;
        case 52:
            //���� ����2
            power = false;
            break;
        default:
            continue;
        }
    }
    return 0;
}