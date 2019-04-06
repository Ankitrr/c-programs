#include<stdio.h>
void getinput(int*a,int*b)
{
    printf("enter the value of first number");
    scanf("%d",a);
    printf("enter the second value");
    scanf("%d",b);
}
int addtn(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
void getout(int a,int b,int c);
{
    printf("%d+%d+%d",a,b,c);
}
int main()
{
    int a,b,c;
    getinput(&a,&b);
    c=addtn(a,b);
    getout(a,b,c);
}
