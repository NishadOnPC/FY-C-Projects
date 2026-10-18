#include<stdio.h>
int main()
{
int rows,columns,i,j;
printf("Enter no. of rows :\n ");
scanf("%d",&rows);

printf("Enter no. of columns :\n ");
scanf("%d",&columns);

int a[rows][columns];
int b[rows][columns];
int sum[rows][columns];

printf("Enter first matrix elements:\n");
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter second matrix elements:\n");
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<rows;i++) 
{
for(j=0;j<columns;j++)
{
sum[i][j] = a[i][j] + b[i][j];
}
}

printf("Addition of two matrices is:\n");
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++) 
{
printf("%d ",sum[i][j]);
}
printf("\n ");
}
return 0;
}



