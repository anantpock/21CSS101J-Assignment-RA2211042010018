#include<stdio.h>
main()
{  
    int a[10],n,c=0;  
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
        
    }   
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c++;
        }
        
    } 
    if(c==0)
    {
        printf("mersene number");
    }
    else
    {
        printf("not mersene number");
    }
}



