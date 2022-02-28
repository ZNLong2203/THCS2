#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[100000];
		int b[100000]={};
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++) {
			b[a[i]]++;
		}
		for(int i=1;i<=n;i++) {
			if(b[i]==0) {
				printf("%d\n",i);
				break;
			}
		}
	}
}
