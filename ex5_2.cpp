#include <stdio.h>
int main()

{
    double s1=0,s2=0,i;
    int j;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        s1+=i;
        s2+=1/s1;
    }
    printf("%f",s2);
}