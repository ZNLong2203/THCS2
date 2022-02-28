#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n;
		scanf("%lld",&n);
		int a[100000];
		int b[100000]={};
		for(int i=0;i<n-1;i++) {
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n-1;i++) {
			b[a[i]]++;
		}
		for(int i=1;i<=n-1;i++) {
			if(b[i]!=1) {
				printf("%d\n",i);
				break;
			}
		}
	}
}
