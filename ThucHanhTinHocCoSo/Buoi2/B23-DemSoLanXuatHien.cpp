#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n,k;
		scanf("%lld%lld",&n,&k);
		int a[100000];
		int b[100000]={};
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
			b[a[i]]++;
		}
		long long count=0;
		for(int i=0;i<n;i++) {
			if(a[i]==k) {
				printf("%lld",b[a[i]]);
				count++;
				break;
			}
		}
		if(count==0) {
			printf("-1");
		}
		printf("\n");
	}
}
