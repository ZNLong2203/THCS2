#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n,m,k,max;
		scanf("%lld%lld%lld",&n,&m,&k);
		long long a[100000];
		long long b[100000];
		long long c[100000];
		long long check[100000]={};
		for(int i=0;i<n;i++) {
			scanf("%lld",&a[i]);
			check[a[i]]++;
		}
		for(int i=0;i<m;i++) {
			scanf("%lld",&b[i]);
			check[b[i]]++;
		}
		for(int i=0;i<k;i++) {
			scanf("%lld",&c[i]);
			check[c[i]]++;
		}
		int count=0;
		for(int i=0;i<n;i++) {
			if(check[a[i]]==3) {
				count++;
				printf("%lld ",a[i]);
			}
		}
		if(count==0) {
			printf("-1");
		}
	}
}
