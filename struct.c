#include<stdio.h>
#include<string.h>
#define S 50

struct player
{
    char name[S];
    int mark;
};

int main()
{
    struct player play[5];
    strcpy(play[1].name,"Gokul S");
    play[1].mark = 90;

    printf("Name : %s",play[1].name);
    printf("\nMark : %d",play[1].mark);


    strcpy(play[2].name,"S Gokul");
    play[2].mark = 100;

    printf("Name : %s",play[2].name);
    printf("\nMark : %d",play[2].mark);
}