#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter the numbers :");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c);
{
printf("Ais largest");
}
else if(b>c)
{
printf("B is largest");
}
else
{
printf("C is largest");
}
getch();
return 0;
}

