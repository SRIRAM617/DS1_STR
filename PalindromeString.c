#include <stdio.h>

int main()
{
    char name[]="malayalam";
   char name2[9];
  
    int i,j,flag;
    for(j=0;name[j]!='\0';j++)
    {
        
    }
    j=j-1;
    for(i=0;i<9;i++,j--)
    {
        name2[i]=name[j];
        
        
    }
    for(i=0,j=0;name[i]!='\0'&&name2[j]!='\0';i++,j++)
    {
       if(name2[i]==name[j])
       {
           flag=1;
       }
       else
       {
           flag=0;
       }
        
        
    }
    
    
   
    printf("After reversing the string was %s\n",name2);
    if(flag)
    {
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
   

   
}
