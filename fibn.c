#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);

	int a=0;
	int b=1;

	if(n==1)
		printf("%d",a);
	else if(n==2)
		printf("%d",b);
	else{
		for(int i=3;i<=n;i++){
			int temp=a+b;
			a=b;
			b=temp;
		}
		printf("%d",b);
	}
	printf("\n");
	return 0;

}
