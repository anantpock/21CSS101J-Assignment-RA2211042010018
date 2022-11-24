#include <stdio.h>

int main()
{
    int a=0;
    char s[500];
    printf("Enter a string : ");
    gets(s);
    printf("Enter search character : ")
    char t;
    t=getchar();
    for(int i=0;i<strlen(s);i++){
    {if(s[i]==t)
        {
            a++;
        }
            }
    printf("number of times repeated= %d",a);
}

    
