#include<stdio.h>
#include<string.h>

int main()
{
char str1[100];
char str2[100];
int choice;

printf("--- Menu ---\n");
printf("1. Length (strlen)\n");
printf("2. Copy (strcpy)\n");
printf("3. Concatenate (strcat)\n");
printf("4. Compare (strcmp)\n");
printf("Enter your choice: ");

if (scanf("%d",&choice) != 1)
{
printf("Enter valid Number");
return 0;
}
int len;
switch(choice)
{
case 1:
printf("Enter a word: ");
scanf("%s",str1);
len = strlen(str1);
printf("Length is: %d \n",len);
break;

case 2:
printf("Enter the first Word: ");
scanf("%s",str1);
printf("Enter second word: ");
scanf("%s",str2);
strcpy(str1,str2);
printf("Result of copying is: %s \n",str1);
break;

case 3:
printf("Enter the first Word: ");
scanf("%s",str1);
printf("Enter second word: ");
scanf("%s",str2);
strcat(str1,str2);
printf("Result of concatenation is: %s \n",str1);
break;

case 4:
printf("Enter the first word: ");
scanf("%s", str1);
printf("Enter second word: ");
scanf("%s",str2);
if (strcmp(str1,str2) == 0) //if str1=str2 strings are same so ans is 0 (default)
{
printf("The words are exactly same. \n");
}
else
{
printf("Words are different.\n");
}
break;

default:
printf("Invalid choice");
}
return 0;
}

