#include <stdio.h>

int main()
{
    char name[]="welcome";
   char name2[]="apple";

    int i,j;

    for(i=0,j=0;name[i]!='\0'&&name2[j]!='\0';i++,j++)
    {

        if(name[i]!=name2[j])
       {
           break;
       }



    }
    if(name[i]<name2[j])
       {
           printf("%s is larger and %s is smaller\n",name2,name);
       }
       else if(name[i]>name2[j])
       {
           printf("%s is larger and %s is smaller\n",name,name2);

       }








}
