#include<stdio.h>

int main()
{
    char car[20];
    char sport[20];
    char game[20];

    printf("enter a car:\n");
    scanf("%s",car);
    printf("enter a sport:\n");
    scanf("%s",sport);
    printf("enter a game:\n");
    scanf("%s",game);
    printf("my favorite car is %s\n",car);
    printf("I like %s\n",sport);
    printf("i am good in %s\n",game);
    return 0;

}