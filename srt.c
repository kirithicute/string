#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[100],temp;
int i=0,j;
printf("enter the string");
scanf("%s",s);
j=strlen(s)-1;
while(i<j)
temp=s[i];
s[i]=s[j];
s[j]=temp;
i++;
j--;
}
printf("\n reverse string is%s",s);
return (0);
}
