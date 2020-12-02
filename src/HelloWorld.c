#include <stdio.h>
#include "function.c"

int main(int argc, char const *argv[])
{
    printf("Hello World!\n");
    printf("Result from function: %d\n", test(5));
    getchar();
    return 0;
}
