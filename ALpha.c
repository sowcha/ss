#include<stdio.h>

void main()

{

int ch;

printf("\n enter any character");

scanf("%s",&ch);

if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))

{

 printf("\n Alphabet");

}

else

{
 
printf("\n not an alphabet");

}

return 0;

}
