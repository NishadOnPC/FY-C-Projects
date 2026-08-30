//Nishad;)

#include<stdio.h>
int main()
{
int a,b,c,res;
printf("----Menu----\n");
printf("1. ADDITION\n");
printf("2. SUBTRACTION\n");
printf("3. MULTIPLICATION\n");
printf("4. DIVISION\n");
printf("Choose operation\n");
scanf("%d",&c);
if (c>=5)
{
printf("INVALID\n");

return 0;
}

printf("Enter 2 no.s");
scanf("%d %d",&a,&b);

switch(c)
{
case 1:
res=a+b;
printf("add is %d",res);

break;

case 2:
res=a-b;
printf("Sub is%d",res);

break;

case 3:
res=a*b;
printf("Multi is%d",res);

break;

case 4:
res=a/b;
printf("Div is%d",res);

break;
}
return 0;
}
