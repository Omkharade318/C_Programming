#include <stdio.h>
int main()
{
    int i;
    // char name[5] = "SHREE";
    char name[20];
    printf("Enter name: ");
    scanf("%s",name);
    for (i = 0; name[i]!= '\0' ;i++)
    {
        name[i]= name[i] + 32;
    }
    printf("%s", name);
}