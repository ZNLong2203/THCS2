#include<stdio.h>
int main() {
	long long n;
	scanf("%lld",&n);
	long long somoi=0;
	while(n!=0) {
		somoi=(n%10)+somoi*10;
		n/=10;
	}
	printf("%lld",somoi);
}
