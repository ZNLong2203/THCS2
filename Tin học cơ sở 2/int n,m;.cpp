#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,m;
		scanf("%d%d",&n,&m);
		int a=[100000]={};
		int b=[100000]={};
		int c[100000];
		int d[100000];
		for(int i=0;i<n;i++) {
			scanf("%lld",&a[i]);
			a[c[i]]++;
		}
		for(int i=0;i<m;i++) {
			scanf("%lld",&b[i]);
			b[d[i]]++;
		}
		for(int i=0;i<100000;i++) {
			if(a[i]>0 || b[i]>0) {
				printf("%d ",i);
			}
		}
		printf("\n");
		for(int i=0;i<100000;i++) {
			if(a[i]>0 && b[i]>0) {
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}
