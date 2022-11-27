#include <stdio.h>
void main()
{
    int a[26];
    char b[26]="abcdefghijklmnopgrstuvwxyz";
    char c[500];
    printf("Enter String");
    gets(c);
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<strlen(c);j++)
        {
            if(b[i]==c[j])
            {
                a[i]=1;
            }
            
        }
    }
    int d=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]!=1)
        {
            d=1;
        }
    }
    if(d==0)
    {
        printf("Pangram");
    }
    else
    {
        printf("Not Pangram");
    }
}





