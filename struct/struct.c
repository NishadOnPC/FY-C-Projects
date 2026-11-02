#include<stdio.h>

struct Student
{
int rollno;
char name[100];
float sub1;
float sub2;
float sub3;
float sum,percentage;
};

int main()
{
int n;

printf("Enter number of students: ");
scanf("%d",&n);

struct student s[n]; //error

for (int i = 0; i<n; i++)
{
printf("Enter Roll no. ");
scanf("%d", &s[i].rollno);

printf("Enter Student name: ");
scanf("%s", &s[i].name);

printf("Enter subject 1 marks: ");
scanf("%f", &s[i].sub1);

printf("Enter subject 2 marks: ");
scanf("%f", &s[i].sub2);

printf("Enter subject 3 marks: ");
scanf("%f", &s[i].sub3);

s[i].sum = s[i].sub1 + s[i].sub2 + s[i].sub3;
s[i].percentage = s[i].total/3;

}
printf("\n RollNo | Name | subject 1 | subject 2 | subjet 3 | TOtal | PErcentage \n");
for (int i=0;i<n;i++)
{
printf(" %d | %s | %f | %f | %f | %f | %f \n",s[i].rollno, s[i].name, s[i].sub1, s[i].sub2, s[i].sub3, s[i].sum, s[i].percentage);
}
return 0;
}

