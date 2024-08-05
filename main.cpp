#include "stdio.h"
#include "stdlib.h"

using namespace std;

int main(int argc, char *argv[])
{

    if (argc == 1)
    {
        printf("%d\n", 0);
        return 0;
    }

    int temp = atoi(argv[1]);
    int divider = atoi(argv[2]);

    while (temp > divider)
    {
        temp = temp - divider;
    }

    printf("%d\n", temp);
    return 0;
}