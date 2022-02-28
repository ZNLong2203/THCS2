#include<stdio.h>
int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	int so1=1;
	int so2=1;
	while(so1<=n) {
		so1=so1+so2;
		so2=so1;
	}
//	so1=so1+so2;
//	so2=so1;
	while(so1<=k) {
		so1=so1+so2;
		so2=so1;
		printf("%d ",so1);
	}
}

