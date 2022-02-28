#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[100000];
		int b[100000]={};
		int count=0;
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
			if(b[a[i]]==1) {
				printf("%d",a[i]);
				count++;
				break;
			}
			b[a[i]]++;
		}
		if(count==0) {
			printf("-1");
		}
		printf("\n");
	}
}
