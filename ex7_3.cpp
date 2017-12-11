#include <stdio.h>
int main()
{
    int a[10], *p, *m, t;
    for(p=a;p<a+10;p++)
        scanf("%d",p);
    m=a;
    for(p=a+1;p<a+10;p++)
        if(*m<*p) m=p;
    if(m!=a)
	{
        t=*m;
        *m=a[0];
        a[0]=t;
	}
    for(p=a; p<a+10; p++)
        printf("%d",*p);
    printf("\n");
    return 0;
}