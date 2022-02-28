#include<stdio.h>
int fibo(int n) {
	long long so1,so2,so;
	so1=1,so2=1,so=so1+so2;
	if(n==1 || n==2) {
		return 1;
	}	else {
		int xet=3;
		while(xet!=n) {
			so1=so2;
			so2=so;
			so=so1+so2;
			xet++;
		}
		return so;
	}
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		printf("%lld\n",fibo(n));
	}
}
