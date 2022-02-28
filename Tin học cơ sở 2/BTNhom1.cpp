#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int du=0;
		long long n;
		scanf("%lld",&n);
		while(n>=1) {
			du+=n%2;
			n/=2;
		}
		printf("%d\n",du);
	}
}
