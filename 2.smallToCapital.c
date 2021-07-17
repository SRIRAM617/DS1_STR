
#include <stdio.h>

int main()
{
    char name[]="welcome";
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        name[i]-=32;
    }
    printf("The string in capital was %s \n",name);
}
