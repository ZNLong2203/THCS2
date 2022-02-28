#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[10000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++) {
			int count=0;
			for(int j=i+1;j<n;j++) {
				if(a[i]<=a[j]) {
					count++;
					break;
				} 
			}
			if(count==0) {
				printf("%d ",a[i]);
			}
		}
		printf("\n");
	}
}

