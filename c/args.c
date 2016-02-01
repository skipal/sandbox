#include <stdio.h>

int main(int arg, char *args[])
{
    int loop = 0;

    printf("numbers of args is:%d\n", arg);
    
    for (loop = 0; loop < arg; loop++)
    {
        printf("[%d]:[%s]\n",loop, args[loop]);
    }


    return 0;
}