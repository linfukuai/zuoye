#include <stdio.h>
void main()
{
int m,k=0,i;
printf("������������m��ֵ:  ");
scanf("%d",&m);
for(i=2;i<=m;i++)
if(i%7==0||i%11==0)
{
printf("%d  ",i);
k++;
}
printf("\n\n1��%d֮���ܱ�7��11������������%d����\n",m,k);
}