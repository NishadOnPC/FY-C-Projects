#include<stdio.h>

int n;

int norecursion()
{
int fact=1;
for(int i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}

int yesrecursion()
{
if(n<=1)
{
return 1;
}
else
{
int current=n;
n=n-1;
return current*yesrecursion();
}
}

int main()
{
printf("Enter a number: ");
scanf("%d",&n);
int result1=norecursion();
int result2=yesrecursion();
printf("Factorial without recursion = %d\n",result1);
printf("Factorial with recursion = %d\n",result2);
return 0;
}
