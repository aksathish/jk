#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int j=0;
int main()
{
    printf("Enter Q to quit !\n");
    while(1)
    {
    j++;
    printf("%d\n",j);
    Sleep(1000);
    system("cls");
    }
    return 0;

}

