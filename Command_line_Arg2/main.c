#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc !=2){
        printf("Usage: %s<string>\n",argv[0]);
        return 1;
    }

    char *inputString = argv[1];
    int length= strlen(inputString);
    printf("Length of the String '%s' is: %d\n", inputString,length);
    return 0;
}
