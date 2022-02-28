#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n;
		scanf("%lld",&n);
		if(n%11==0 || n==0) {
			printf("1\n");
		}	else printf("0\n");
	}
}
