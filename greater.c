#include<studio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\n enter the first number");
scanf("%d",&a);
printf("\n enter the second number");
scanf("%d",&b);
printf("\n enter the third number");
scanf("%d",&c);
if(a>b)
{
if(a>c)
   printf("\n &a is greater");
else
   printf("\n &c is greater");
}
else(a<b)
{
if(b>c)
    printf("\n &b is greater");
else
    printf("\n &c is greater");
}
return 0;
}  
