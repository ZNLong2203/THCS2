#include<stdio.h>
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	if(b>a) {
		int ssh=((b-a))+1;
		long long tong=((a+b)*ssh)/2;
		printf("%lld",tong);
	} else {
		int ssh=((a-b))+1;
		long long tong=((a+b)*ssh)/2;
		printf("%lld",tong);
	}
}
