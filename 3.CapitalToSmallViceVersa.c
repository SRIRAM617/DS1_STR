
#include <stdio.h>

int main()
{
    char name[]="Welcome";
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=97&&name[i]<=122)
        {
        name[i]=name[i]-32;
        }
        else if(name[i]>=65&&name[i]<=90)
        {
        name[i]=name[i]+32;
        }
    }
    printf("The string after converting from capital to small and vice versa  was %s \n",name);
}
