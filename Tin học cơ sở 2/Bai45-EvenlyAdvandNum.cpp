#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n,xet;
		scanf("%lld",&n);
		int countodd=0;
		int counteven=0;
		if(n%2==0) {
			while(n>0) {
				xet=n%10;
				if(xet%2==0) {
					counteven++;
				}	else countodd++;
				n/=10;
			}
			if(counteven>countodd) {
				printf("YES\n");
			}	else printf("NO\n");
		}	else printf("NO\n");
	}
}
