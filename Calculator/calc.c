//Nishad:)

#include<stdio.h>
int main()
{
int a,b,c,r;
printf("---Menu---\n");
printf("1. ADDITION\n");
printf("2. SUBTRACTION\n");
printf("3. MULTIPLICATION\n");
printf("4. DIVISION\n");
printf("Choose the operation between 1 to 4:\n");
scanf("%d",&c);
if(c < 1 || c > 4)
{
printf("INVALID CHOICE");
return 0;
}

printf("Enter any 2 numbers:\n");
if (scanf("%d %d",&a,&b) !=2)

{
printf("ERROR enter valid numbers please.\n");
return 0;

}

switch(c)
{
case 1:
r=a+b;
printf("Addition is :%d\n ",r);
break;

case 2:
r=a-b;
printf("Subtraction is :%d\n",r);
break;

case 3:
r=a*b;
printf("Multiplication is :%d\n ",r);
break;

case 4:
if (b==0)
{
printf("Division by 0 is not possible\n");
return 0;
}
r=a/b;
printf("Division is :%d\n ",r);
break;

}

return 0;

}
