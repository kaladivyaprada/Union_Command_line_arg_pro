#include <stdio.h>
#include <stdlib.h>

union data
{
    int no;
    char name[20];
    char usn[10];
    char branch[20];
};

int main()
{
    union data da;
    printf("Enter the students Details\n");
    printf("Enter the No:");
    scanf("%d", &da.no);
    printf("Enter the Name:");
    scanf("%s", da.name);
    printf("Enter the USN:");
    scanf("%s", da.usn);
    printf("Enter the BRANCH:");
    scanf("%s", da.branch);





}

