#include <stdio.h>
#include <string.h>
void main()
{ char str1[30],str2[10];
  int n;
  char t[30];
  int length1,length2,length3;
  int i,j=0;
  printf("Input the orignal string:");
  scanf("%s",str1);
  printf("Input the string you want to insert:");
  scanf("%s",str2);
  length1=strlen(str1);
  length2=strlen(str2);
  printf("Input the position:");
  scanf("%d",&n);
  for(i=n;i<length1;i++)
	  t[j++]=str1[i];
  length3=j;
  j=n;
  for(i=0;i<length2;i++)
	  str1[j++]=str2[i];
  for(i=0;i<length3;i++)
	  str1[j++]=t[i];
  str1[j]='\0';
  printf("%s",str1);
}