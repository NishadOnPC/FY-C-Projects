#include <stdio.h>
void swap( int *a, int *b )
{
int temp;
temp = *a;
*a=*b;
*b = temp;
}

int main()
{
int m,n;
printf("Enter 2 Numbers: \n");
scanf("%d %d",&m ,&n);
printf("Numbers Before swapping m =  %d , n = %d \n" , m ,n);

swap (&m,&n);

printf("Numbers After swapping m =  %d , n = %d \n" , m ,n);
return 0;
}
