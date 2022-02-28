#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n,k;
		scanf("%lld%lld",&n,&k);
		int a[100000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++) {
			if(a[i]==k) {
				printf("%lld",i+1);
				break;
			}
		}
		printf("\n");
	}
}
