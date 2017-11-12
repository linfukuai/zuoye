#include<stdio.h>
int main()
{ 
	int n, t, m = 0;
	scanf("%d", &n);
	t = n;
	printf("%d ", t);
	while(t != 1)
	{
		if(t % 2)
			t = t * 3 + 1;
		else
			t /= 2;
		m++;
		printf("%d ", t);
	}
	printf("\n%d calculate %d times,the answer become to 1!\n", n, m);
	return 0;
}