#include <stdio.h>
#include <string.h>

int main()
{
char a[50],b[50],c[50];
int i,j,op,len=0;
printf("\n enter a string: ");
scanf("%s",&a);
printf("\n enter a choice: ");
scanf("%d",&op);
switch(op)
{
case 1:printf("\n length of the string");
      for(i=0;a[i]!='\0';i++)
      {
      len++;
      }
      printf("\n length is %d\n",len);
      break;
case 2:printf("\n reverse of String");
       for(i=0;a[i]!='\0';i++)
       {
       len++;
       }
       printf("\n length is %d\n",len);
       for(i=len-1;i>=0;i--)
       {
       printf("%c",a[i]);
       }
       break;
case 3:printf("\n copying one string to another");
      for(i=0;a[i]!='\0';i++)
      {
      b[i]=a[i];
      }
      b[i]='\0';
      printf("\n string b is %s",b);
      break;
case 4:printf("\n concatation of string");
      printf("\n enter the another string");
      scanf("%s",c);
      for(i=0;a[i]!='\0';i++)
      {
      printf("%c",a[i]);
      }
      for(j=0;c[j]!='\0';j++)
      {
      printf("%c",c[i]);
      }
      break;
      default:printf("\n invalid choice");
      break;
}
int getcher();
return 0;
}
