#include<stdio.h>
#include<math.h>
int main() {
	long long n;
	scanf("%lld",&n);
	int count=0;
	long long xet=n;
	for(int i=2;i<=sqrt(n)+100;i++) {
		while(n%i==0) {
			n/=i;
			count++;
			if(n==1) {
				printf("%d",i);
			}	else printf("%dx",i);
		}
	}
	if(n!=1) {
		printf("%lld",n);
	}
}
