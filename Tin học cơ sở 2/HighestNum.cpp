#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[10000];
		int max=0;
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
			if(a[i]>max) {
				max=a[i];
			}
		}
		int count=0;
		printf("%d\n",max);
		for(int i=0;i<n;i++) {
			if(a[i]==max) {
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}
