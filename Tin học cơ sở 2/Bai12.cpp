#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n;
		scanf("%lld",&n);
		long long socuoi = n%10;
		long long sodau =1;
		while(n!=0) {
			sodau=n%10;
			n/=10;
		}
		if(socuoi == sodau) {
			printf("YES\n");
		}	else {
			printf("NO\n");
		}
	}
}
