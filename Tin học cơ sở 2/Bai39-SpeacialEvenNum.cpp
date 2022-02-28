#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n,xet;
		int count=0;
		scanf("%lld",&n);
		while(n>0) {
			xet=n%10;
			if(xet%2!=0) {
				printf("NO\n");
				count++;
				break;
			}
			n/=10;
		}
		if(count==0) {
			printf("YES\n");
		}
	}
}
