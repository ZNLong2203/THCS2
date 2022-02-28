#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,k;
		scanf("%d%d",&n,&k);
		int a[10000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		int count=0;
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				if((a[i]+a[j])==k) {
					count++;
				}
			}
		}
		printf("%d ",count);
		printf("\n");
	}
}
