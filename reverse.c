#include<stdio.h>
#include<conio.h>
int main()
{
    int x,r,t;
    r=0;
    printf("enter any number: ");
    scanf("%d", &x);
    while(x!=0)
    {
               t=x%10;
               r=t+r*10;
               x=x/10;
               }
               printf("reversed number is %d", r);
               getch();
               return 0;
               }
