
#include <stdio.h>

int main()
{
    char name[]="How are   u";
    int i,vcount=0,ccount=0,wcount=1;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||
        name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        {
          vcount++;
        }
        else if(name[i]>=65&&name[i]<=90||name[i]>=97&&name[i]<=122)
        {
         ccount++;
        }
        else if(name[i]==' '&&name[i-1]!=' ')
        {
            wcount++;
        }
       
    }
    printf("The vowels are %d \n",vcount);
    printf("The consonants are %d \n",ccount);
    printf("The words are %d \n",wcount);
    
}
