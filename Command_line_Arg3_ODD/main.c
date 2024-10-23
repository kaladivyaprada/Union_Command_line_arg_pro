#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc !=2){
        printf("Usage: %s<integer>\n", argv[0]);
        return 1;
    }

    int number = atoi(argv[1]);

    if(number %2 == 0){
        printf("%d is even.\n", number);
    }
    else{
        printf("%d is odd.\n", number);
    }
    return 0;
}
