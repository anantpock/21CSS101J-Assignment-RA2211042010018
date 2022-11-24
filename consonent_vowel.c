/*vowel or consonent*/
#include <stdio.h>

int main()
{
    printf("enter a character");
    char a;
    scanf("%c",&a);
    if(a=="a"||a=="e"||a=="i"||a=="o"||a=="u"||a=="A"||a=="E"||a=="I"||a=="O"||a=="U")
    {
        printf("vowel");
    }
    else
    {
        printf("consonent");
    }
}
/*output:
enter a characterb
consonent*/
