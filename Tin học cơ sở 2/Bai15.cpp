#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n;
		scanf("%lld",&n);
		int i=2;
		while(n>1) {
			if(n%i==0) {
				printf("%d ",i);
				n=n/i;
			} else {
				i++;
			}
		}
		printf("\n");
	}
}
