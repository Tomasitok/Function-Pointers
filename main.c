#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 4 || strlen(argv[2]) != 1)
    {
        printf("Error\n");
        return 1;
    }
    int N1 = atoi(argv[1]);
    char *Sig = (argv[2]);
    int N2 = atoi(argv[3]);

    int (*result)(int, int) = get_op_func(argv[2]);

    if(result != NULL)
    {
        int res = result(N1, N2);
        printf("%d\n", res);
    }
}