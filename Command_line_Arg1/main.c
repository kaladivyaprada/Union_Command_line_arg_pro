#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int i;
    printf("Total of Arguments: %d", argc);
    printf("The Arguments are\n");
    for(i=0; i < argc; i++){
        printf("argv of [%d]= %s\n",i,argv[i]);
    }
    return 0;

}



