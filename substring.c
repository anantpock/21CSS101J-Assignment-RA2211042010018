 #include <stdio.h>
void main()
{
    char b[500];
    char c[500];
    int a=0;
    printf("Enter String");
    gets(b);
    for(int i=0;i<strlen(b);i++)
    {
        if(b[i]='A'||b[i]=='B')
        {
            c[a]=b[i];
            a++;
        }
    }
    printf("\n");
    puts(c);
}
