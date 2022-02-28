#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n;
		scanf("%lld",&n);
		int count=0;
		for(int i=2;i<=sqrt(n);i++) {
			if(n%i==0) {
				count++;
			}
		}
		if(count==0 && n>=2) {
			printf("YES\n");
		}	else printf("NO\n");
	}
}
