#include<stdio.h>
int main()
{
    int d,c=0,i,a,b=1;
    printf("\n enter the number:");
    scanf("%d",&d);
    while(d!=c)
    {
        a=0;
        b++;
        for(i=2;i<=(b/2);i++)
        {
            if(b%i==0)
                a=1;
        }
        if(a==0)
        {
            c++;
        }
    }
    printf("%d prime number is: %d",d,b);
    return 0;
}
