#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n;
		long long a[10000]={};
		scanf("%lld",&n);
		a[0]=1;
		a[1]=1;
		int xet=1;
		while(a[xet]<n) {
			xet++;
			a[xet]=a[xet-1]+a[xet-2];
		}
		if(a[xet]==n || n==0) {
			printf("YES\n");
		}	else printf("NO\n");
	}
}
