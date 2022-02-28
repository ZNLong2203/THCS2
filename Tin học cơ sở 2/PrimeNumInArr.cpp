#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[1000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		for(int j=0;j<n;j++) {
			int count=0;
			for(int k=2;k<=sqrt(a[j]);k++) {
				if(a[j]%k==0) {
					count++;
				}
			}
			if(count==0 && a[j]>=2) {
				printf("%d ",a[j]);
			}
		}
		printf("\n");
	}
}
