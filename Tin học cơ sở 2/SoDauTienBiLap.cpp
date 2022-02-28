#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,temp;
		scanf("%d",&n);
		int a[100000];
		int b[100000];
		int dem=0;
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		int count=0;
		for(int i=0;i<n;i++) {
			b[i]=a[i];
			for(int j=0;j<i;j++) {
				if(a[i]==b[j]) {
					printf("%d",a[i]);
					break;
				}
			}
		}
		if(count==0) {
			printf("NO\n");
		}
	}
}
