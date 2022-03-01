#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i,n,sum = 0;
	
	printf("請輸入n值");
	scanf("%d",&n);
	
	for(i=2;i<=n;i=i+2)
		sum= sum+i;
	
	printf("n = %d，總和 = %d",n ,sum);
	
	system("pause");
	return 0;
}
