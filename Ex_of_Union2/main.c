#include <stdio.h>
#include <stdlib.h>

union data
{
    int no;
    float per;
    char name;
};

int main()
{
    printf("Size of union data is: %z u bytes\n",sizeof(union data));
    return 0;
}
