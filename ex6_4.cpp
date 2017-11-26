#include <stdio.h>
int main(){
	int a[20],i;
	a[0]=a[1]=1;
	for(i=2;i<20;i++)
		a[i]=a[i-1]+a[i-2];
	for(i=0;i<20;i++){
		printf("%4d ",a[i]);
		if((i+1)%5==0)
			printf("\n");	
	}	
	return 0;
}