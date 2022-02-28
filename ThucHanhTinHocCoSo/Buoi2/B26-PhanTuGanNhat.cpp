#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[100000];
		int count=0;
		int min1=0;
		int min2=-10;
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		int x,k;
		scanf("%d%d",&x,&k);
		for(int i=0;i<n;i++) {
			if(abs(a[i]-x)>min1) {
				
			}
		}
		if(count==0) {
			printf("-1");
		}
		printf("\n");
	}
}
