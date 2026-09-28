#include<stdio.h>
int main()
{
char ch;
int a,b,r;
printf("---Menu---\n");
printf("A. ADDITION\n");
printf("S. SUBTRACTION\n");
printf("M. MULTIPLICATION\n");
printf("D. DIVISION\n");
printf("Choose the operation between A to D:\n");
  
if(scanf("%c",&ch) !=1 )
{
  printf("Enter Designated Operations Only");
  return 0;
}
  
if( ch != 'A' && ch != 'S' && ch != 'M' && ch != 'D' )
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

switch(ch)
{
case 'A':
r=a+b;
printf("Addition is :%d\n ",r);
break;

case 'S':
r=a-b;
printf("Subtraction is :%d\n",r);
break;

case 'M':
r=a*b;
printf("Multiplication is :%d\n ",r);
break;

case 'D':
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
