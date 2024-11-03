#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

void zero(int x, int y);
void one(int x, int y);
void two(int x, int y);
void three(int x, int y);
void four(int x, int y);
void five(int x, int y);
void six(int x, int y);
void seven(int x, int y);
void eight(int x, int y);
void nine(int x, int y);
void colon(int x, int y);
void call(int digit,int x,int y);
void getTime();

int main(void)
{
    system("cls");
    printf("\n\n");
    while (TRUE)
    {
        getTime();
        Sleep(1000);
    }
    printf("\n\n");
    return 0;
}

void getTime() {
    int hour, minutes, second;

    // Get current time
    time_t now;
    struct tm *timeinfo;

    time(&now);
    timeinfo = localtime(&now);

    hour = timeinfo->tm_hour;
    minutes = timeinfo->tm_min;
    second = timeinfo->tm_sec;

    // Display hours
    call(hour / 10, 0, 7);
    call(hour % 10, 9, 7);

    // Display first colon
    colon(18, 7);

    // Display minutes
    call(minutes / 10, 22, 7);
    call(minutes % 10, 32, 7);

    // Display second colon
    colon(42, 7);

    // Display seconds
    call(second / 10, 44, 7);
    call(second % 10, 53, 7);
}
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void call(int digit , int x ,int y){
    switch (digit)
    {
    case 1: one(x,y); break;
    case 2: two(x,y); break;
    case 3: three(x,y); break;
    case 4: four(x,y); break;
    case 5: five(x,y); break;
    case 6: six(x,y); break;
    case 7: seven(x,y); break;
    case 8: eight(x,y); break;
    case 9: nine(x,y); break;
    default: zero(x,y); break;
    }
}
void zero(int x,int y){

    int i,j;
    for(i=1;i<=9;i++)
    {
        printf(" ");
        for(j=1;j<=5;j++)
        {
            gotoxy(x,y);
            if(i==1 || i==9 || j==1 || j==5){
                printf("*");
            }
            else{
                printf(" ");
            }
            x++;
        }
        printf("\n");
        y++;
        x=x-5;
    }
}
void one(int x,int y){

    int i,j;
    for(i=1 ;i<=9 ;i++)
    {
        printf(" ");
        for(j=1;j<=5;j++)
        {
            gotoxy(x,y);
            if(j==3){
                printf("*");
            }else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        printf("\n");
    }
}
void two(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        printf("  ");
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || i==5 || i==9 || (i<5 && j==5) || (j==1 && i>5)){
                printf("*");
            }
            else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        printf("\n");
    }
}
void three(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        printf("  ");
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || i==5 || i==9 || j==5){
                printf("*");
            }
            else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        printf("\n");
    }
}
void four(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        printf("  ");
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==5 || j==5 || (j==1 && i<5)){
                printf("*");
            }
            else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        printf("\n");
    }
}
void five(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        printf("  ");
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || i==5 || i==9 || (i>5 && j==5) || (j==1 && i<5)){
                printf("*");
            }
            else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        printf("\n");
    }
}
void six(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        printf("  ");
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || i==5|| i==9 || j==1 || (j==5 && i>5)){
                printf("*");
            }
            else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        printf("\n");
    }
}
void seven(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        printf("  ");
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || j==5){
                printf("*");
            }
            else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        printf("\n");
    }
}
void eight(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        printf("  ");
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || i==5|| i==9 || j==1 || j==5){
                printf("*");
            }
            else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        printf("\n");
    }
}
void nine(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        printf("  ");
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(j==5 || i==5|| i==9 || i==1 || (j==1 && i<5)){
                printf("*");
            }
            else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        printf("\n");
    }
}
void colon(int x, int y) {
    // Print the upper dot of the colon
    gotoxy(x, y + 2);
    printf("*");

    // Print the lower dot of the colon
    gotoxy(x, y + 6);
    printf("*");
}




