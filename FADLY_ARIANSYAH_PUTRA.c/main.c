#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define outputHandle GetStdHandle(STD_OUTPUT_HANDLE)
#define BLACK 0
#define DARK_BLUE 1
#define DARK_GREEN 2
#define DARK_CYAN 3
#define DARK_RED 4
#define DARK_PURPLE 5
#define DARK_YELLOW 6
#define DARK_WHITE 7
#define GRAY 8
#define BLUE 9
#define GREEN 10
#define CYAN 11
#define RED 12
#define PURPLE 13
#define YELLOW 14
#define WHITE 15
int text_color = FOREGROUND_INTENSITY;
int background_color = 4;
void go(int x, int y)
{
    COORD position = {x, y};
    SetConsoleCursorPosition(outputHandle, position);
}
void warna_text(int color)
{
    SetConsoleTextAttribute(outputHandle, color | (background_color << 4));
    text_color = color;
}
void warna_bg(int color)
{
    SetConsoleTextAttribute(outputHandle, text_color | (color << 4));
    background_color = color;
}
void tampilan();
void pil();
void login_admin();
void login_user();
void cekadmin();
void cekpass();
void cekno();
void cekuser();
void passadmin();
void kotak(int x, int y, int text, int back, int ver, int hor);
void menu();
void daftar_user();
void aqua();
void leminerale();
void cristaliyne();
void vit();
void cleo();
void botol_plastik();
void kaca();
void menu_transaksi();
void info();
void yatombol();
void geser();
void yatombol2();
void geser3();
void kotak3();
void pindah();
void kotakan();
void yatombol3();
void geser4();
void data_user();
void gender();
void profil1_user();
void geser_admin();
void tamp_menu_admin();

char nik[100];
char nohp[100];
char usia[100];
char user[100];
char pass[100];
char hp[100];
char nama2[20];
char no2[20];
char pass2[20];

void tampilan_dasar()
{
    system("color 4b");
    // warna_bg(4);
}
void logo()
{
    // warna_bg(3);
    go(15, 4);
    warna_text(6);
    printf("%c%c     %c%c %c%c    %c%c    %c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c  %c%c%c%c%c%c  %c%c    %c%c  %c%c%c%c%c%c  %c%c       %c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    go(15, 5);
    warna_text(6);
    printf("%c%c%c   %c%c%c  %c%c  %c%c     %c%c     %c%c %c%c       %c%c    %c%c  %c%c  %c%c  %c%c    %c%c %c%c       %c%c       ", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    go(15, 6);
    warna_text(6);
    printf("%c%c%c%c %c%c%c%c   %c%c%c%c      %c%c     %c%c %c%c       %c%c         %c%c%c%c   %c%c       %c%c       %c%c       ", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    go(15, 7);
    warna_text(6);
    printf("%c%c %c%c%c %c%c    %c%c       %c%c%c%c%c%c%c%c  %c%c%c%c%c%c   %c%c          %c%c    %c%c       %c%c       %c%c%c%c%c%c   ", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    go(15, 8);
    warna_text(6);
    printf("%c%c %c%c%c %c%c    %c%c       %c%c%c%c%c%c%c%c  %c%c%c%c%c%c   %c%c          %c%c    %c%c       %c%c       %c%c%c%c%c%c   ", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    go(15, 9);
    warna_text(6);
    printf("%c%c     %c%c    %c%c       %c%c   %c%c   %c%c       %c%c          %c%c    %c%c       %c%c       %c%c       ", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    go(15, 10);
    warna_text(6);
    printf("%c%c     %c%c    %c%c       %c%c    %c%c  %c%c       %c%c    %c%c    %c%c    %c%c    %c%c %c%c       %c%c       ", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    go(15, 11);
    warna_text(6);
    printf("%c%c     %c%c    %c%c       %c%c     %c%c %c%c%c%c%c%c%c%c  %c%c%c%c%c%c     %c%c     %c%c%c%c%c%c  %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c ", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    go(45, 13);
    printf("   \\    __");
    go(45, 14);
    printf("  /      \\  |      /\\ ");
    go(45, 15);
    printf(" //  |/  \\ ");
    go(45, 16);
    printf("|   \\   /        /   / ");
    go(45, 17);
    printf(" \\   \\         \\/   / ");
    go(45, 18);
    printf("  \\  /          \\_/ ");
    go(45, 19);
    printf("   \\/ __    /\\ ");
    go(45, 20);
    printf("     /  \\    /  \\ ");
    go(45, 21);
    printf("    /\\   \\  /   / ");
    go(45, 22);
    printf("      \\   \\/   / ");
    go(45, 23);
    printf("       \\_\\/ ");
    Sleep(3000);
    system("cls");

    pil();
}

void tampilan_awal(int a, int x1, int x2)
{

    warna_text(x1);
    warna_bg(x2);
    if (a == 10)
    {
        go(55, a - 1);
        printf("            ");
        go(55, a);
        printf("   ADMIN    ");
        go(55, a + 1);
        printf("            ");
    }
    else if (a == 16)
    {
        // kotak(52, 14, 2, 4, 11, 4);
        go(55, a - 1);
        printf("            ");
        go(55, a);
        printf("    USER    ");
        go(55, a + 1);
        printf("            ");
    }
}
void pil()
{
    // warna_bg(7);
    // kotak(52, 8, 1, 15, 11, 4);
    go(55, 10);
    printf("   ADMIN  ");

    // kotak(52, 14, 2, 17, 11, 4);
    go(55, 16);
    printf("    USER   ");
}
void geser_tombol()
{
    int geser, x = 10;
    do
    {
        tampilan_awal(x, 4, 7);
        geser = getch();
        switch (geser)
        {
        case 72:
            tampilan_awal(x, 6, 4);
            x += 3;
            if (x > 14)
            {
                x = 10;
            }
            break;
        case 80:
            tampilan_awal(x, 6, 4);
            x -= 3;
            if (x < 13)
            {
                x = 16;
            }
            break;
        }

    } while (geser != 13);
    if (x == 10 && geser == 13)
    {
        pil();
        system("cls");
        if (geser == 13)
        {
            login_admin();
        }
    }
    else if (x == 16 && geser == 13)
    {

        pil();
        system("cls");
        if (geser == 13)
        {
            login_user();
        }
    }
}
void login_admin()
{
    char user1[20], pass1[20];
    int a = 0;
    go(45, 8);
    printf("masukkan username:");
    go(45, 9);
    printf("=======================");
    go(45, 12);
    printf("masukkan password:");
    go(45, 13
      );
    printf("=======================");
    go(45, 8);
    printf("masukkan username:");
    cekadmin(user1);
    go(45, 12);
    printf("masukkan password:");
    passadmin(pass1);

    if (strcmp(user1, "admin") == 0 && strcmp(pass1, "12345678") == 0)
    {
        a++;
    }
    else
    {
        a = 0;
    }

    if (a == 1)
    {
        go(55, 20);
        printf("selamat datang");
        Sleep(1000);
        system("cls");
        tamp_menu_admin();
    }
    else if (a == 0)
    {
        login_admin();
    }
}
void tamp_menu_admin()
{
    go(45, 12);
    printf(" DATA PELANGGAN ");
    go(45, 15);
    printf("    LOG OUT     ");
    geser_admin();
}
void menu_admin(int q, int u, int k)
{
    if (q == 12)
    {

        go(45, q);
        printf(" DATA PELANGGAN ");
    }
    else if (q == 15)
    {
        // kotak(52, 14, 2, 4, 11, 4);

        go(45, q);
        printf("     LOG OUT    ");
    }
}
void geser_admin()
{
    int geser6, g = 10;
    do
    {
        menu_admin(g, 4, 7);
        geser6 = getch();
        switch (geser6)
        {
        case 72:
            menu_admin(g, 6, 4);
            g += 3;
            if (g > 14)
            {
                g = 12;
            }
            break;
        case 80:
            menu_admin(g, 6, 4);
            g -= 3;
            if (g < 13)
            {
                g = 15;
            }
            break;
        }

    } while (geser6 != 13);
    if (g == 12 && geser6 == 13)
    {
        pil();
        system("cls");
        if (geser6 == 13)
        {
            data_user();
        }
    }
    else if (g == 15 && geser6 == 13)
    {

        pil();
        system("cls");
        if (geser6 == 13)
        {
            exit(0);
        }
    }
}

void login_user()
{
    char user[50], pass[50], hp[13], user1[50], hp1[50], pass1[50];
    char tamp[100], tamp1[13], tamp2[100];
    int a = 0, pilih, pilih2;
    kotak(35, 8, 0, 14, 42, 4);
    go(40, 10);
    printf("apakah anda sudah memiliki akun?");
    go(46, 20);
    printf("pilih 1 untuk lanjut!");
    go(46, 21);
    printf("pilih 2 untuk daftar!");
    go(54, 25);
    printf("pilih:");
    scanf("%d", &pilih);
    system("cls");
    if (pilih == 1)
    {
        getchar();

        go(45, 12);
        printf("USERNAME:");
        go(45, 13);
        printf("===========================");
        go(45, 14);
        printf("PASSWORD:");
        go(45, 15);
        printf("===========================");
        go(45, 12);
        printf("USERNAME:");
        cekuser(user);
        go(45, 13);
        printf("===========================");
        go(45, 14);
        printf("PASSWORD:");
        cekpass(pass);
        go(45, 15);
        printf("===========================");
        a = 0;
        FILE *buzz = fopen("user.txt", "r");
        fflush(stdin);
        while ((fscanf(buzz, "%[^$]$%[^\n]\n", &tamp, &pass1)) != EOF)
        {
            if ((strcmp(user, tamp) == 0) && (strcmp(pass, pass1) == 0))
            {

                a++;
            }
        }

        fclose(buzz);

        if (a > 0)
        {
            system("cls");
            menu();
        }
        else if (a == 0)
        {
            system("cls");
            login_user();
        }
    }
    else if (pilih == 2)
    {
        data_user();

        printf("pilih:");
        scanf("%d", &pilih2);
        if (pilih2 == 1)
        {
            system("cls");
            daftar_user();
        }
        else if (pilih2 == 2)
        {
            login_user();
        }
    }
    else
    {
        go(55, 15);
        printf("invalid!!!");
        Sleep(1000);
        system("cls");
        login_user();
    }
}

void cekuser(char *user)
{
    char ch;
    char data1[20] = {};
    char data2[20] = {};
    int dex = 0;
    while ((ch = getch()) != 13 || dex < 3)
    {
        if (dex < 16 && (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9' && dex != 0 ||
                         ch == ' ' && data1[dex - 1] != ' ' && dex != 0))
        {
            printf("%c", ch);
            data1[dex] = ch;
            dex++;
        }
        else if (ch == 8 && dex != 0)
        {
            printf("\b \b");
            dex -= 1;
            data1[dex] = ' ';
        }
    }
    for (int a = 0; a < dex; a++)
    {
        data2[a] = data1[a];
    }
    strcpy(user, data2);
}

void cekpass(char *pass)
{
    char ch;
    char data1[20] = {};
    char data2[20] = {};
    int dex = 0;
    while ((ch = getch()) != 13 || dex < 8)
    {
        if (dex < 8 && (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9' ||
                        ch == '`' || ch == '~' || ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' ||
                        ch == '^' || ch == '&' || ch == '*' || ch == '(' || ch == ')' || ch == '_' || ch == '-' || ch == ',' || ch == '.'))
        {
            printf("%c", ch);
            data1[dex] = ch;
            dex++;
        }
        else if (ch == 8 && dex != 0)
        {
            printf("\b \b");
            dex -= 1;
            data1[dex] = ' ';
        }
    }
    for (int a = 0; a < dex; a++)
    {
        data2[a] = data1[a];
    }
    strcpy(pass, data2);
}

void cekadmin(char *user1)
{
    char ch;
    char data1[20] = {};
    char data2[20] = {};
    int dex = 0;
    while ((ch = getch()) != 13 || dex < 3)
    {
        if (dex < 16 && (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9' && dex != 0 ||
                         ch == ' ' && data1[dex - 1] != ' ' && dex != 0))
        {
            printf("%c", ch);
            data1[dex] = ch;
            dex++;
        }
        else if (ch == 8 && dex != 0)
        {
            printf("\b \b");
            dex -= 1;
            data1[dex] = ' ';
        }
    }
    for (int a = 0; a < dex; a++)
    {
        data2[a] = data1[a];
    }
    strcpy(user1, data2);
}

void passadmin(char *pass1)
{
    char ch;
    char data1[20] = {};
    char data2[20] = {};
    int dex = 0;
    while ((ch = getch()) != 13 || dex < 8)
    {
        if (dex < 16 && (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9' ||
                         ch == '`' || ch == '~' || ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' ||
                         ch == '^' || ch == '&' || ch == '*' || ch == '(' || ch == ')' || ch == '_' || ch == '-' || ch == ',' || ch == '.'))
        {
            printf("%c", ch);
            data1[dex] = ch;
            dex++;
        }
        else if (ch == 8 && dex != 0)
        {
            printf("\b \b");
            dex -= 1;
            data1[dex] = ' ';
        }
    }
    for (int a = 0; a < dex; a++)
    {
        data2[a] = data1[a];
    }
    strcpy(pass1, data2);
}

void cekno(char *hp)
{
    char ch;
    int dex = 0;
    char data[20] = {};
    char data1[20] = {};
    while ((ch = getch()) != 13 || dex < 11)
    {
        if (ch >= '0' && ch <= '9' && dex < 13)
        {
            if (dex == 0 && ch == '0' || dex == 1 && ch == '8')
            {
                printf("%c", ch);
                data[dex] = ch;
                dex++;
            }
            else if (dex == 2 && (ch == '1' || ch == '2' || ch == '3' || ch == '5' || ch == '7' || ch == '8' || ch == '9'))
            {
                printf("%c", ch);
                data[dex] = ch;
                dex++;
            }
            else if (dex > 2)
            {
                printf("%c", ch);
                data[dex] = ch;
                dex++;
            }
        }
        else if (ch == 8 && dex != 0)
        {
            printf("\b \b");
            dex -= 1;
            data[dex] = ' ';
        }
    }
    for (int a = 0; a < dex; a++)
    {
        data1[a] = data[a];
    }
}

void kotak(int x, int y, int text, int back, int ver, int hor)
{
    for (int a = 0; a <= ver; a++)
    {
        for (int b = 0; b <= hor; b++)
        {
            if (a == 0 || a == 1 || a == ver - 1 || a == ver || b == 0 || b == hor)
            {
                go(x + a, y + b);
                warna_text(text);
                printf("%c", 219);
            }
            else
            {
                go(x + a, y + b);
                warna_bg(back);
                printf(" ");
            }
        }
    }
}

void menu()
{

    int pilih, a = 0;

    go(55, 10);
    printf("    INFORMASI   ");

    go(55, 13);
    printf("    TRANSAKSI   ");

    go(55, 16);
    printf(" DATA PELANGGAN ");

    go(55, 19);
    printf("     LOG OUT    ");

    geser();
}
void yatombol(int a, int y1, int y2)
{
    warna_text(y1);
    warna_bg(y2);
    if (a == 10)
    {
        go(55, a);

        printf("    INFORMASI   ");
    }
    else if (a == 13)
    {
        go(55, a);

        printf("    TRANSAKSI   ");
    }
    else if (a == 16)
    {
        go(55, a);

        printf(" DATA PELANGGAN ");
    }
    else if (a == 19)
    {
        go(55, a);

        printf("     LOG OUT    ");
    }
}
void geser()
{
    int geser1, x = 10;
    do
    {
        yatombol(x, 15, 4);
        geser1 = getch();
        switch (geser1)
        {
        case 80:
            yatombol(x, 6, 14);
            x += 3;
            if (x > 19)
            {
                x = 10;
            }
            break;
        case 72:
            yatombol(x, 6, 14);
            x -= 3;
            if (x < 10)
            {
                x = 19;
            }
            break;
        }
    } while (geser1 != 13);
    if (x == 10 && geser1 == 13)
    {
        system("cls");

        info();
    }
    else if (x == 13 && geser1 == 13)
    {
        system("cls");
        if (geser1 == 13)
        {
            menu_transaksi();
        }
    }
    else if (x == 16 && geser1 == 13)
    {
        system("cls");
        if (geser1 == 13)
        {
            profil1_user();
        }
    }
    else if (x == 19 && geser1 == 13)
    {
        system("cls");
        if (geser1 == 13)
        {
            exit(0);
        }
    }
}

void info()
{
    go(35, 8);
    printf("Sampah organik berasal dari sisa organisme hidup,");
    go(33, 9);
    printf("misalnya sisa sayuran dan buah-buahan yang dibuang. ");
    go(10, 10);
    printf("Sedangkan sampah anorganik bukan berasal dari organisme hidup dan merupakan hasil campur tangan manusia. ");
    go(17, 11);
    printf("Contohnya limbah botol plastik, kardus, plastik pembungkus makanan, dan sebagainya.");
}

void menu_transaksi()
{
    int pilih1;
    kotak(45, 7, 7, 10, 30, 10);
    go(55, 8);
    printf("JENIS SAMPAH");
    go(55, 12);
    printf("   KACA   ");
    go(55, 14);
    printf("  PLASTIK ");

    geser3();
}
void yatombol2(int b, int y3, int y4)
{
    warna_text(y3);
    warna_bg(y4);
    if (b == 12)
    {
        go(55, b);

        printf("    KACA   ");
    }
    else if (b == 14)
    {
        go(55, b);

        printf("  PLASTIK  ");
    }
}

void geser3()
{
    int geser2, a = 10;
    do
    {
        yatombol2(a, 16, 7);
        geser2 = getch();
        switch (geser2)
        {
        case 80:
            yatombol2(a, 6, 17);
            a += 2;
            if (a > 19)
            {
                a = 12;
            }
            break;
        case 72:
            yatombol2(a, 6, 17);
            a -= 2;
            if (a < 10)
            {
                a = 14;
            }
            break;
        }
    } while (geser2 != 13);
    if (a == 12 && geser2 == 13)
    {
        system("cls");

        kaca();
    }
    else if (a == 14 && geser2 == 13)
    {
        system("cls");

        botol_plastik();
    }
}
void profil1_user()
{
    int a = 0;
    char name[100], gen[100], num[100];
    FILE *man = fopen("datauser.txt", "r");
    int index = 0;

    while (fscanf(man, "%[^$]$%[^$]$%[^\n]\n", &name, &gen, &num) != EOF)
    {
        index++;
    }
    go(10, 23);
    printf("NAMA             : %s", name);
    go(10, 24);
    printf("JENIS KELAMIN    : %s", gen);
    go(10, 25);
    printf("NO.HP            : %s", num);
    fclose(man);
}

void kaca()
{
    int gram, harga, total, a = 0;
    int pilih;
    do
    {
        go(55, 10);
        printf("Berapa gram :");
        scanf("%d", &gram);
        if (gram <= 50 && gram >= 1000)
        {
            go(25, 15);
            printf("Min 50 & Max 1 kg");
            Sleep(800);
            system("cls");
        }
        harga = 50;
        total = harga * gram;
        go(35, 20);
        printf("pilih 1 untuk lanjut menjual!");
        go(35, 21);
        printf("pilih 2 untuk berhenti!");
        go(50, 15);
        printf("apakah anda ingin menjual lagi(y/t)");
        go(60, 16);
        printf("pilih:");
        scanf("%d", &pilih);
        if (pilih == 1)
        {
            a = 1;
        }
        else if (pilih == 2)
        {
            go(55, 25);
            printf("Total penjualan anda adalah : Rp.%d'_", total);
            a = 0;
        }

    } while (a == 1);
    go(0, 39);
    printf("TEKAN ESC UNTUK KEMBALI");
    int j;
    do
    {
        j = getch();
        if (j == 27)
        {
            system("cls");
            menu_transaksi();
        }
    } while (j != 13);
}
void botol_plastik()
{
    int pilih1;
    // kotak(20,10,45,3,11)
    // kotakan(20,10,45,3,11,5);
    kotak(20, 4, 14, 4, 80, 20);
    go(55, 10);
    printf("     AQUA     ");
    go(55, 12);
    printf("  LEMINERALE  ");
    go(55, 14);
    printf("  CRISTALYNE  ");
    go(55, 16);
    printf("      VIT     ");
    go(55, 18);
    printf("     CLEO     ");
    geser4();
}
void aqua()
{
    int jumlah1, total1 = 0, harga1, a = 0;
    int pilih;
    do
    {
        go(55, 10);
        printf("Masukkan jumlah botol :");
        scanf("%d", &jumlah1);
        if (!(jumlah1 >= 10 && jumlah1 <= 100))
        {
            go(25, 15);
            printf("Min 10 & Max 100");
            Sleep(800);
        }
        harga1 = 500;
        total1 += harga1 * jumlah1;
        go(35, 20);
        printf("pilih 1 untuk lanjut menjual!");
        go(35, 21);
        printf("pilih 2 untuk berhenti!");
        go(50, 15);
        printf("apakah anda ingin menjual lagi(y/t)");
        go(60, 16);
        printf("pilih:");
        scanf("%d", &pilih);
        if (pilih == 1)
        {
            a = 1;
            system("cls");
        }
        else if (pilih == 2)
        {
            a = 0;
            go(55, 25);
            printf("Total penjualan anda adalah : Rp.%d'_", total1);
        }
    } while (a == 1);
    go(0, 39);
    printf("TEKAN ESC UNTUK KEMBALI");
    int j;
    do
    {
        j = getch();
        if (j == 27)
        {
            system("cls");
            botol_plastik();
        }
    } while (j != 13);
}
void leminerale()
{
    int jumlah2, total2 = 0, harga2, a = 0;
    int pilih;
    do
    {
        go(55, 10);
        printf("Masukkan jumlah2 botol :");
        scanf("%d", &jumlah2);
        if (!(jumlah2 >= 10 && jumlah2 <= 100))
        {
            go(25, 15);
            printf("Min 10 & Max 100");
            Sleep(800);
        }
        harga2 = 600;
        total2 += harga2 * jumlah2;
        go(35, 20);
        printf("pilih 1 untuk lanjut menjual!");
        go(35, 21);
        printf("pilih 2 untuk berhenti!");
        go(50, 15);
        printf("Apakah anda ingin menjual lagi(y/t)");
        go(60, 16);
        printf("pilih:");
        scanf("%d", &pilih);
        if (pilih == 1)
        {
            a = 1;
            system("cls");
        }
        else if (pilih == 2)
        {
            a = 0;
            go(55, 25);
            printf("Total penjualan anda adalah : Rp.%d'_", total2);
        }
    } while (a == 1);
    go(0, 39);
    printf("TEKAN ESC UNTUK KEMBALI");
    int j;
    do
    {
        j = getch();
        if (j == 27)
        {
            system("cls");
            botol_plastik();
        }
    } while (j != 13);
}
void vit()
{
    int jumlah3, total3 = 0, harga3, a = 0;
    int pilih;
    do
    {
        go(55, 10);
        printf("Masukkan jumlah3 botol : ");
        scanf("%d", &jumlah3);
        if (!(jumlah3 >= 10 && jumlah3 <= 100))
        {
            go(25, 15);
            printf("Min 10 & Max 100");
            Sleep(800);
        }
        harga3 = 600;
        total3 += harga3 * jumlah3;
        go(35, 20);
        printf("pilih 1 untuk lanjut menjual!");
        go(35, 21);
        printf("pilih 2 untuk berhenti!");
        go(50, 15);
        printf("Mpakah anda ingin menjual lagi(y/t):");
        go(60, 16);
        printf("pilih:");
        scanf("%d", &pilih);
        if (pilih == 1)
        {
            a = 1;
            system("cls");
        }
        else if (pilih == 2)
        {
            a = 0;
            go(55, 25);
            printf("Total penjualan anda adalah : Rp.%d'_", total3);
        }
    } while (a == 1);
    go(0, 39);
    printf("TEKAN ESC UNTUK KEMBALI");
    int j;
    do
    {
        j = getch();
        if (j == 27)
        {
            system("cls");
            botol_plastik();
        }
    } while (j != 13);
}
void cristaliyne()
{
    int jumlah4, total4 = 0, harga4, a = 0;
    char pilih;
    do
    {
        kotak(25, 6, 12, 5, 50, 5);
        go(40, 8);
        printf("Masukkan jumlah4 botol :");
        scanf("%d", &jumlah4);
        if (!(jumlah4 >= 10 && jumlah4 <= 100))
        {
            go(25, 15);
            printf("Min 10 & Max 100");
            Sleep(800);
        }
        harga4 = 600;
        total4 += harga4 * jumlah4;
        go(35, 20);
        printf("pilih 1 untuk lanjut menjual!");
        go(35, 21);
        printf("pilih 2 untuk berhenti!");
        go(35, 13);
        printf("Apakah anda ingin menjual lagi(y/t):");
        go(60, 16);
        printf("pilih:");
        scanf("%d", &pilih);
        if (pilih == 1)
        {
            a = 1;
            system("cls");
        }
        else if (pilih == 2)
        {
            a = 0;
            go(55, 25);
            printf("Total penjualan anda adalah : Rp.%d'_", total4);
        }
    } while (a == 1);
    go(0, 39);
    printf("TEKAN ESC UNTUK KEMBALI");
    int j;
    do
    {
        j = getch();
        if (j == 27)
        {
            system("cls");
            botol_plastik();
        }
    } while (j != 13);
}
void cleo()
{
    int jumlah5, total5 = 0, harga5, a = 0;
    int pilih;
    do
    {
        go(55, 10);
        printf("Masukkan jumlah5 botol :");
        scanf("%d", &jumlah5);

        if (!(jumlah5 >= 10 && jumlah5 <= 100))
        {
            go(25, 15);
            printf("Min 10 & Max 100");
            Sleep(800);
        }
        harga5 = 600;
        total5 += harga5 * jumlah5;
        go(35, 20);
        printf("pilih 1 untuk lanjut menjual!");
        go(35, 21);
        printf("pilih 2 untuk berhenti!");
        go(50, 15);
        printf("Apakah anda ingin menjual lagi(y/t)?");
        go(60, 16);
        printf("pilih:");
        scanf("%d", &pilih);
        if (pilih == 1)
        {
            a = 1;
            system("cls");
        }
        else if (pilih == 2)
        {
            a = 0;
            go(55, 25);
            printf("Total penjualan anda adalah : Rp.%d'_", total5);
        }
    } while (a == 1);
    go(0, 39);
    printf("TEKAN ESC UNTUK KEMBALI");
    int j;
    do
    {
        j = getch();
        if (j == 27)
        {
            system("cls");
            botol_plastik();
        }
    } while (j != 13);
}

void lempar_nama(char *nama)
{
    char ch;
    char data1[20] = {};
    char data2[20] = {};
    int dex = 0;
    while ((ch = getch()) != 13 || dex < 3)
    {
        if (dex < 16 && (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9' && dex != 0 ||
                         ch == ' ' && data1[dex - 1] != ' ' && dex != 0))
        {
            printf("%c", ch);
            data1[dex] = ch;
            dex++;
        }
        else if (ch == 8 && dex != 0)
        {
            printf("\b \b");
            dex -= 1;
            data1[dex] = ' ';
        }
    }
    for (int a = 0; a < dex; a++)
    {
        data2[a] = data1[a];
    }
    strcpy(nama, data2);
}
void lempar_no(char *no2)
{
    char ch;
    int dex = 0;
    char data[20] = {};
    char data1[20] = {};
    while ((ch = getch()) != 13 || dex < 11)
    {
        if (ch >= '0' && ch <= '9' && dex < 13)
        {
            if (dex == 0 && ch == '0' || dex == 1 && ch == '8')
            {
                printf("%c", ch);
                data[dex] = ch;
                dex++;
            }
            else if (dex == 2 && (ch == '1' || ch == '2' || ch == '3' || ch == '5' || ch == '7' || ch == '8' || ch == '9'))
            {
                printf("%c", ch);
                data[dex] = ch;
                dex++;
            }
            else if (dex > 2)
            {
                printf("%c", ch);
                data[dex] = ch;
                dex++;
            }
        }
        else if (ch == 8 && dex != 0)
        {
            printf("\b \b");
            dex -= 1;
            data[dex] = ' ';
        }
    }
    for (int a = 0; a < dex; a++)
    {
        data1[a] = data[a];
    }
    strcpy(no2, data1);
}

void pass3(char *pass2)
{
    char ch;
    char data1[20] = {};
    char data2[20] = {};
    int dex = 0;
    while ((ch = getch()) != 13 || dex < 8)
    {
        if (dex < 16 && (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9' ||
                         ch == '`' || ch == '~' || ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' ||
                         ch == '^' || ch == '&' || ch == '*' || ch == '(' || ch == ')' || ch == '_' || ch == '-' || ch == ',' || ch == '.'))
        {
            printf("%c", ch);
            data1[dex] = ch;
            dex++;
        }
        else if (ch == 8 && dex != 0)
        {
            printf("\b \b");
            dex -= 1;
            data1[dex] = ' ';
        }
    }
    for (int a = 0; a < dex; a++)
    {
        data2[a] = data1[a];
    }
    strcpy(pass2, data2);
}

void gender(char *jk)
{
    char ch;
    char data1[20] = {};
    char data2[20] = {};
    int dex = 0;
    while ((ch = getch()) != 13 || dex < 3)
    {
        if (dex < 16 && (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch == '-' ||
                         ch == ' ' && data1[dex - 1] != ' ' && dex != 0))
        {
            printf("%c", ch);
            data1[dex] = ch;
            dex++;
        }
        else if (ch == 8 && dex != 0)
        {
            printf("\b \b");
            dex -= 1;
            data1[dex] = ' ';
        }
    }
    for (int a = 0; a < dex; a++)
    {
        data2[a] = data1[a];
    }
    strcpy(jk, data2);
}
void nama_user(char *nama5)
{
    char ch;
    char data1[20] = {};
    char data2[20] = {};
    int dex = 0;
    while ((ch = getch()) != 13 || dex < 3)
    {
        if (dex < 16 && (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' ||
                         ch == ' ' && data1[dex - 1] != ' ' && dex != 0))
        {
            printf("%c", ch);
            data1[dex] = ch;
            dex++;
        }
        else if (ch == 8 && dex != 0)
        {
            printf("\b \b");
            dex -= 1;
            data1[dex] = ' ';
        }
    }
    for (int a = 0; a < dex; a++)
    {
        data2[a] = data1[a];
    }
    strcpy(nama5, data2);
}
void no_user(char *no3)
{
    char ch;
    int dex = 0;
    char data[20] = {};
    char data1[20] = {};
    while ((ch = getch()) != 13 || dex < 11)
    {
        if (ch >= '0' && ch <= '9' && dex < 13)
        {
            if (dex == 0 && ch == '0' || dex == 1 && ch == '8')
            {
                printf("%c", ch);
                data[dex] = ch;
                dex++;
            }
            else if (dex == 2 && (ch == '1' || ch == '2' || ch == '3' || ch == '5' || ch == '7' || ch == '8' || ch == '9'))
            {
                printf("%c", ch);
                data[dex] = ch;
                dex++;
            }
            else if (dex > 2)
            {
                printf("%c", ch);
                data[dex] = ch;
                dex++;
            }
        }
        else if (ch == 8 && dex != 0)
        {
            printf("\b \b");
            dex -= 1;
            data[dex] = ' ';
        }
    }
    for (int a = 0; a < dex; a++)
    {
        data1[a] = data[a];
    }
    strcpy(no3, data1);
}

void data_user()
{
    char nama5[20], jk[20], no3[100];

    FILE *apa = fopen("datauser.txt", "a");
    printf("NAMA            :");
    nama_user(nama5);
    printf("\nJENIS KELAMIN   :");
    gender(jk);
    printf("\nNO.HP           :");
    no_user(no3);

    fprintf(apa, "%s$%s$%s\n", nama5, jk, no3);
    fclose(apa);
}
void daftar_user()
{

    FILE *nan = fopen("user.txt", "a");
    getchar();
    go(20, 7);
    printf("MASUKKAN USERNAME:");
    lempar_nama(nama2);

    go(20, 9);

    go(20, 10);
    printf("MASUKKAN PASSWORD:");
    pass3(pass2);

    fprintf(nan, "%s$%s\n", nama2, pass2);
    fclose(nan);
}

void kotakan(int x, int y, int m, int n)
{
    // warna_text(a);
    // warna_bg(b);
    for (int b = 0; b < n; b++)
    {
        for (int a = 0; a < m; a++)
        {

            go(x + b, y + a);
            printf(" ");
        }
    }
}

void kotak3(int x, int y)
{
    for (int a = 0; a < 3; a++)
    {
        for (int b = 1; b < 11; b++)
        {
            if (a == 0 || b == 1 || b == 10 || a == 2)
            {
                go(x + b, y + a);
                printf("%c", 254);
            }
        }
    }
}

void yatombol3(int d, int y5, int y6)
{
    warna_text(y5);
    warna_bg(y6);
    if (d == 10)
    {
        go(55, d);

        printf("     AQUA      ");
    }
    else if (d == 12)
    {
        go(55, d);

        printf("   LEMINERALE  ");
    }
    else if (d == 14)
    {
        go(55, d);

        printf("  CRISTALYNE  ");
    }
    else if (d == 16)
    {
        go(55, d);

        printf("      VIT      ");
    }
    else if (d == 18)
    {
        go(55, d);

        printf("      CLEO     ");
    }
}
void geser4()
{
    int geser5, c = 10;
    do
    {
        yatombol3(c, 15, 4);
        geser5 = getch();
        switch (geser5)
        {
        case 80:
            yatombol3(c, 6, 14);
            c += 2;
            if (c > 19)
            {
                c = 10;
            }
            break;
        case 72:
            yatombol3(c, 6, 14);
            c -= 2;
            if (c < 10)
            {
                c = 18;
            }
            break;
        }
    } while (geser5 != 13);
    if (c == 10 && geser5 == 13)
    {
        system("cls");
        aqua();
    }
    else if (c == 12 && geser5 == 13)
    {
        system("cls");
        if (geser5 == 13)
        {
            leminerale();
        }
    }
    else if (c == 14 && geser5 == 13)
    {
        system("cls");
        if (geser5 == 13)
        {
            cristaliyne();
        }
    }
    else if (c == 16 && geser5 == 13)
    {
        system("cls");
        if (geser5 == 13)
        {
            vit();
        }
    }
    else if (c == 18 && geser5 == 13)
    {
        system("cls");
        if (geser5 == 13)
        {
            cleo();
        }
    }
}

void main()
{
    tampilan_dasar();
    logo();
    geser_tombol();
    // geser();
    // geser3();
    // geser_tombol2();
    // daftar_admin();
    // daftar_user();
    // pindah();
    // data_user();
    // info();

    getch();
}