#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,m,max;
		scanf("%d%d",&n,&m);
		int a[100000];
		int b[100000];
		int giao[100000];
		int count=0;
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
			giao[a[i]]++;
		}
		for(int i=0;i<m;i++) {
			scanf("%d",&b[i]);
			giao[b[i]]++;
		}
		if(a[n-1]>b[m-1]) {
			max=a[n-1];
		} else {
			max=b[m-1];
		}
		for(int i=1;i<=max;i++) {
			if(giao[i]!=0) {
				printf("%d ",i);
			}
		}
		printf("\n");
		for(int i=1;i<=max;i++) {
			if(giao[i]>1 && giao[i]!=0) {
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}
